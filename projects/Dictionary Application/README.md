# Simple Dictionary Application

## Description

This project implements a basic dictionary application in C that allows users to manage a list of words and their definitions. The application provides a text-based menu interface for user interaction, enabling users to add words, display all words, search for a word by its name, and delete words from the dictionary.

## Features

- **Add a Word:** Allows the user to add a new word along with its definition to the dictionary.
- **Display Words:** Displays all the words currently stored in the dictionary along with their definitions.
- **Search Word:** Allows the user to search for a word by its name and displays its definition if found.
- **Delete Word:** Allows the user to delete a word from the dictionary.
- **Exit:** Exits the program.

## Required Modules

- Standard I/O library (`stdio.h`)
- Standard library (`stdlib.h`)
- String library (`string.h`)

These libraries are typically included by default with most C compilers.

## How to Install Required Modules

No additional modules need to be installed. Ensure you have a C compiler (such as `gcc`) installed on your system.

## How to Run the Script

1. **Clone the Repository:**
```sh
   git clone https://github.com/yourusername/dictionary-application.git
   cd dictionary-application
```
2. Compile the Program:
Use the `gcc` compiler to compile the program:
```bash 
gcc -o dictionary dictionary.c
```
2. Run the Script:
Execute the compiled program:
```bash 
./dictionary
```

4. Follow the On-Screen Instructions:

The program will display a menu with the available operations. Enter the corresponding number to perform an operation.
```bash 
Dictionary Application
1. Add Word
2. Display Words
3. Search Word
4. Delete Word
5. Exit
Enter your choice: 
```
## Example 
```bash 
Dictionary Application
1. Add Word
2. Display Words
3. Search Word
4. Delete Word
5. Exit
Enter your choice: 1
Enter word: Apple
Enter definition: A fruit that is typically red, green, or yellow.
Word added successfully!

Dictionary Application
1. Add Word
2. Display Words
3. Search Word
4. Delete Word
5. Exit
Enter your choice: 2
Word            Definition
---------------------------------------------------
Apple           A fruit that is typically red, green, or yellow.

Dictionary Application
1. Add Word
2. Display Words
3. Search Word
4. Delete Word
5. Exit
Enter your choice: 3
Enter word to search: Apple
Definition of Apple: A fruit that is typically red, green, or yellow.

Dictionary Application
1. Add Word
2. Display Words
3. Search Word
4. Delete Word
5. Exit
Enter your choice: 4
Enter word to delete: Apple
Word 'Apple' deleted successfully.
```