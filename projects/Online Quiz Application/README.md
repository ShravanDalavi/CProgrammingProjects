# Online Quiz Application
A simple C program to manage an online quiz application. The application allows you to add questions, display all questions, and conduct a quiz with a score at the end.

## Description
This program is a basic implementation of an online quiz application. It supports the following functionalities:

- Add a new question with multiple-choice options
- Display all questions with their options and correct answers
- Conduct a quiz and provide a score based on the user's answers

## Features
- Add Question: Allows you to add a new question to the quiz.
- Display Questions: Displays all questions currently available in the quiz.
- Conduct Quiz: Conducts a quiz and provides a score at the end.

## Required Modules
The program uses the standard C library modules:

- `stdio.h` for input/output functions
- `stdlib.h` for memory allocation
- `string.h` for string manipulation

## How to Install Required Modules
No additional modules need to be installed. Ensure you have a C compiler like `gcc` installed on your system.

## How to Run the Script
Follow these steps to compile and run the program:

1. Save the code: Save the provided code to a file named `quiz_application.c`.

2. Open a terminal or command prompt: Navigate to the directory where you saved `quiz_application.c`.

3. Compile the code: Use a C compiler like `gcc` to compile the program. Run the following command:
```bash 
gcc quiz_application.c -o quiz_application
```
4. Run the compiled program: After successful compilation, run the program using::
```bash 
./quiz_application
```
5. Follow the on-screen instructions: The program will display a menu with options to add questions, display questions, conduct a quiz, or exit the program. Enter the corresponding number to choose an option.

## Example
```bash
Online Quiz Application
1. Add Question
2. Display Questions
3. Conduct Quiz
4. Exit
Enter your choice: 1
Enter the question text: What is the capital of France?
Enter option 1: Paris
Enter option 2: London
Enter option 3: Berlin
Enter option 4: Madrid
Enter the correct option number (1-4): 1
Question added successfully!

Online Quiz Application
1. Add Question
2. Display Questions
3. Conduct Quiz
4. Exit
Enter your choice: 2
Question 1: What is the capital of France?
  Option 1: Paris
  Option 2: London
  Option 3: Berlin
  Option 4: Madrid
  Correct option: 1
```
