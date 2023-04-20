# README: readWriteFile.c

This repository contains a simple C program called `readWriteFile.c` that demonstrates how to read and write data to a file using the C programming language.

## Table of Contents

- [Overview](#overview)
- [Usage](#usage)

## Overview

The `readWriteFile.c` program performs the following actions:

1. Opens a file called `myfile.txt` in write mode.
2. Writes a string "Hello Zedro" to the file.
3. Closes the file.
4. Reopens the file in read mode.
5. Reads the contents of the file into a character array.
6. Prints the contents of the file to the console.
7. Closes the file.

The program uses `fopen`, `fputs`, `fgets`, and `fclose` functions from the `stdio.h` library to manipulate the file. These functions provide a simple and straightforward way to work with files in C.

## Usage

To use this program, follow these steps:

1. Compile the `readWriteFile.c` file using a C compiler (e.g., GCC).
2. Run the compiled executable.
3. The program will create a file named `myfile.txt` and write "Hello Zedro" to it.
4. The program will then read the contents of `myfile.txt` and print it to the console.
