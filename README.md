# CS50 Week 4 — Memory

This repository contains my work from **Week 4 of Harvard's CS50**, where I focused on one of the most important topics in C programming: **memory**.

At this stage of the course, I moved beyond writing basic programs and started developing a deeper understanding of how data is stored, accessed, modified, and managed in memory. This week challenged me to think more carefully about what happens behind the scenes when a program runs.

## What I learned

During Week 4, I worked on core concepts such as:

- Memory layout in C
- Variables and addresses
- Pointers and dereferencing
- Custom data types
- Call stacks
- File input and output
- Manipulating binary data
- Working with pixel-based image data
- Recovering deleted files from raw memory data

These topics helped me shift from simply writing code to understanding **how the computer actually handles that code in memory**.

## Problem Set Focus

### Volume

In the **Volume** problem, I worked with a `.wav` audio file and learned how to:

- Read file headers correctly
- Process 16-bit audio samples
- Apply a scaling factor to change volume
- Write the modified data into a new output file

This exercise strengthened my understanding of:

- `fread()` and `fwrite()`
- `int16_t` and binary file structures
- Audio represented as numerical sample data
- The relationship between data representation and real-world output

### Filter

In the **Filter** problem, I implemented image-processing logic in C by applying filters to 24-bit BMP images.

Through this exercise, I practiced:

- Working with 2D arrays
- Manipulating RGB pixel values
- Using nested loops to process images
- Applying transformations to structured image data
- Creating a temporary copy of image data to safely implement blur logic

The filters I implemented were:

- Grayscale
- Sepia
- Horizontal Reflection
- Blur

This problem helped me understand that images are not just visuals on a screen — they are structured collections of bytes and color values that can be manipulated programmatically.

### Recover

In the **Recover** problem, the goal is to recover deleted JPEGs from a forensic image of a memory card.

This exercise strengthens understanding of:

- Raw data inspection
- File signatures and format identification
- Block-based reading with buffers
- Sequential file recovery
- Low-level file handling in C

It also connects memory concepts to a practical digital forensics task, showing how deleted files can still be reconstructed from raw binary data.

## Why this week matters

Week 4 was a major turning point in my learning process.

Before this, I could follow code logic. After this week, I started understanding:

- where variables live in memory
- how functions interact through the call stack
- why pointers are powerful
- how binary files can be read and modified directly
- how memory concepts apply to audio, images, and file recovery

This was not just about solving exercises — it was about building a stronger computer science foundation.

## Skills demonstrated

Through this week’s work, I practiced and demonstrated:

- Problem-solving in C
- Debugging low-level logic
- Reading and modifying binary files
- Manipulating WAV audio samples
- Processing BMP image data with pixel-level transformations
- Recovering JPEG files from raw memory data
- Writing structured and efficient code
- Developing a deeper understanding of memory management

## My learning approach

I am documenting my CS50 journey publicly to show not only completed exercises, but also my growth in logic, technical understanding, and consistency.

This repository reflects my commitment to:

- learning by doing
- improving step by step
- building strong programming fundamentals
- treating each exercise as part of a long-term professional development path

## About CS50

CS50 is Harvard University’s introduction to computer science. The course covers topics such as algorithms, data structures, memory, abstraction, and software engineering.

## Author

**Guilherme Lima**  
CS50 student | Building programming foundations step by step
