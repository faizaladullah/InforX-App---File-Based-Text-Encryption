Boleh. Untuk **InforX App** ni, aku buat README yang nampak kemas untuk GitHub dan fokus pada assignment/project, tak perlu cerita panjang pasal siapa buat apa.

# InforX App — File-Based Text Encryption

A C++ console-based application that performs text encryption and decryption using a **Linked Stack** data structure.

## Overview

InforX App is a file-based text encryption and decryption application developed using C++. The application reads text from a file, processes the characters using a stack, and applies a simple encryption protocol by reversing the text and replacing vowels with specific symbols.

The application can also decrypt the encrypted text by converting the symbols back into vowels and reversing the characters using the stack.

## Features

* Encrypt text from a file
* Decrypt text from a file
* Reverse characters using a Linked Stack
* Replace vowels with encryption symbols
* Convert encryption symbols back to vowels
* Read text using file handling
* Input file validation
* Error handling for missing or empty files

## Encryption Protocol

| Character | Encrypted Symbol |
| --------- | ---------------- |
| `a / A`   | `*`              |
| `e / E`   | `@`              |
| `i / I`   | `#`              |
| `o / O`   | `$`              |
| `u / U`   | `&`              |

### Example

Original text:

```text
hello
```

After reversing:

```text
olleh
```

After vowel replacement:

```text
$ll@h
```

## Decryption Process

The decryption process performs the reverse operations:

```text
Encrypted Text
      ↓
Replace Symbols with Vowels
      ↓
Reverse Characters Using Stack
      ↓
Original Text
```

## Technologies

* C++
* Dev-C++
* File Handling (`fstream`)
* Linked Stack

## Data Structure

The application uses a **Linked Stack** to reverse the characters in the input text.

```cpp
linkedStackType<char> charStack;
```

Characters are pushed into the stack and then popped from the top to produce the reversed text.

## C++ Concepts Used

* Object-Oriented Programming
* Classes and objects
* Stack data structure
* File input using `ifstream`
* Loops
* Conditional statements
* Functions
* String manipulation
* Input validation

## Menu

The application provides three options:

```text
InforX App Menu:

1. Encrypt text from file
2. Decrypt text from file
3. Exit
```

## Project Structure

```text
InforX-App/
├── main.cpp
├── linkedStack.h
├── input.txt
└── README.md
```

> `input.txt` is an example input file. Additional files may be included depending on the project setup.

## How to Run

1. Open the project in **Dev-C++**.
2. Make sure `main.cpp` and `linkedStack.h` are located in the project folder.
3. Compile and run the program.
4. Prepare a text file containing the text to be encrypted or decrypted.
5. Enter the file name when prompted.
6. Select the desired operation from the menu.



Bachelor of Computer Science (Hons) — Software Engineering
Universiti Sains Malaysia (USM)
