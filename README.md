# CS50x Week 4 – Memory

Problem sets from Week 4 of Harvard's CS50x, focused on memory, pointers and reading and writing binary files in C.

**Language:** C · **Course:** [CS50x](https://cs50.harvard.edu/x/) · **Status:** Completed (2026)

## Overview

This week I worked directly with bytes: changing the volume of a WAV file, applying filters to BMP images pixel by pixel, and recovering deleted JPEGs from a raw memory-card image.

## Projects

| Project | File | Description | Key concepts |
|---|---|---|---|
| Volume | `volume.c` | Copies a WAV file's header and scales every audio sample by a factor | `fread`/`fwrite`, `int16_t`, file headers |
| Filter | `helpers.c` | Applies grayscale, sepia, reflection and blur filters to 24-bit BMP images | 2D arrays, RGB values, working on a copy of the image |
| Recover | `recover.c` | Recovers deleted JPEGs from a forensic image of a memory card | File signatures, 512-byte blocks, buffers |

## How to run

Requires the [CS50 Library](https://cs50.readthedocs.io/libraries/cs50/c/) and the distribution files from the CS50 problem set.

```bash
make recover
./recover card.raw
```

## What I learned

- How variables, pointers and addresses work in memory
- Reading and writing binary files safely
- How images and audio are just structured numbers that code can change
- Identifying file types by their signatures, a basic digital forensics technique

## Academic honesty

These solutions were written by me as part of CS50x. If you're taking the course, please follow CS50's [academic honesty policy](https://cs50.harvard.edu/x/honesty/) and write your own code.

---

**Guilherme Lima** · Aspiring IT Support Technician · [LinkedIn](https://www.linkedin.com/in/glimaalmeida) · [GitHub](https://github.com/GuiLimaTi)
