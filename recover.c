#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // Check if user gave exactly one file name
    if (argc != 2)
    {
        printf("Usage: ./recover FILE\n");
        return 1;
    }

    // Open the raw memory card file
    FILE *card = fopen(argv[1], "r");
    if (card == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    // Buffer of 512 bytes because the card is read in blocks of 512
    uint8_t buffer[512];

    // This will store names like 000.jpg, 001.jpg, etc.
    char filename[8];

    // Pointer for the JPEG file we are writing
    FILE *img = NULL;

    // Counter for recovered JPEGs
    int file_count = 0;

    // Read one block at a time until there is no more data
    while (fread(buffer, 1, 512, card) == 512)
    {
        // Check if this block is the start of a new JPEG
        if (buffer[0] == 0xff &&
            buffer[1] == 0xd8 &&
            buffer[2] == 0xff &&
            (buffer[3] & 0xf0) == 0xe0)
        {
            // If we were already writing a JPEG, close it first
            if (img != NULL)
            {
                fclose(img);
            }

            // Create new file name
            sprintf(filename, "%03i.jpg", file_count);

            // Open a new JPEG file for writing
            img = fopen(filename, "w");

            // Move to next JPEG number
            file_count++;
        }

        // If we already found a JPEG, keep writing blocks into it
        if (img != NULL)
        {
            fwrite(buffer, 1, 512, img);
        }
    }

    // Close any file still open
    if (img != NULL)
    {
        fclose(img);
    }

    fclose(card);
    return 0;
}
