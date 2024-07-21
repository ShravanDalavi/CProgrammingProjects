# Mini Voting System

## Description

This project implements a simple Voting System using the C programming language. The application allows you to initialize candidates, cast votes, and display voting results.

## Features

- **Initialize Candidates:** Set up the list of candidates with their names.
- **Cast Vote:** Users can cast their votes for the desired candidate.
- **Display Results:** Show the number of votes each candidate has received.

## Required Modules

- Standard C Library

## How to Install Required Modules

No additional modules are required. The code uses the standard C library.

## How to Run the Script

1. **Clone the Repository:**

```sh
    git clone https://github.com/yourusername/mini-voting-system.git
    cd mini-voting-system
```

2. **Compile the Program:**

```sh
    gcc -o voting voting.c
```

3. **Run the Program:**

```sh
    ./voting
```

## Output

When you run the application, you will see the following prompts and output:
```bash 
Enter the number of candidates: 3
Enter name for candidate 1: Alice
Enter name for candidate 2: Bob
Enter name for candidate 3: Shravan

Voting System Menu:
1. Cast Vote
2. Display Results
3. Exit
Enter your choice: 1
Candidates:
1. Alice
2. Bob
3. Shravan
Enter candidate number to vote for: 3
Vote casted successfully!

Voting System Menu:
1. Cast Vote
2. Display Results
3. Exit
Enter your choice: 2
Results:
Alice: 0 votes
Bob: 0 votes
Shravan: 1 votes

Voting System Menu:
1. Cast Vote
2. Display Results
3. Exit
Enter your choice: 3
```

