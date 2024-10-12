# AltMoney Operations

This project consists of two C++ programs that demonstrate arithmetic and comparison operations on monetary values. Both programs use a class called `AltMoney`, which allows the representation of money in dollars and cents. The programs showcase different operations such as addition, subtraction, and comparisons between two monetary values.

## Table of Contents
1. [Project Description](#project-description)
2. [Purpose of Learning](#purpose-of-learning)
3. [Installation](#installation)
4. [Usage](#usage)
5. [Features](#features)

## Project Description

The project contains two C++ programs:

1. **`ex41.cpp`**: This program prompts the user to enter two different amounts of money (dollars and cents) and performs addition and subtraction on the two amounts. It displays the results of both operations.
   
2. **`ex42.cpp`**: This program asks the user for two different amounts of money and determines whether the two amounts are equal, greater than, or less than each other using operator overloading. The program also performs addition of the two amounts.

### Classes Used

- **`AltMoney` Class**: The class represents monetary values in dollars and cents. It includes functions to add, subtract, and compare two monetary values. Operator overloading is used in the second program to compare the monetary values.

### Example Operations:
- Addition
- Subtraction
- Equality (`==`)
- Greater than (`>`)
- Less than (`<`)

## Purpose of Learning

This project was designed to practice and improve the following C++ programming concepts:
- **Class Design**: Creating classes with member functions and private variables.
- **Operator Overloading**: Implementing custom comparison operators (`==`, `<`, `>`).
- **Friend Functions**: Using friend functions to implement addition, subtraction, and comparisons.
- **Basic Arithmetic**: Handling operations with monetary values.
- **User Input/Output**: Managing input of dollar and cent values and displaying the results of operations.

## Installation

To run these programs on your computer, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/M3thical/altmoney-operations.git
    ```

2. Navigate to the project directory:
    ```bash
    cd altmoney-operations
    ```

3. Compile the programs using a C++ compiler like `g++`:
    - For `ex41.cpp`:
      ```bash
      g++ ex41.cpp -o altmoney_add_subtract
      ```
    - For `ex42.cpp`:
      ```bash
      g++ ex42.cpp -o altmoney_compare
      ```

4. Run the programs:
    - For `ex41.cpp` (addition and subtraction):
      ```bash
      ./altmoney_add_subtract
      ```
    - For `ex42.cpp` (comparisons and addition):
      ```bash
      ./altmoney_compare
      ```

## Usage

### `ex41.cpp` (Addition and Subtraction)
The program will prompt the user to enter two amounts of money. It will then display the result of adding and subtracting the two amounts.

### `ex42.cpp` (Comparisons)
The program will prompt the user to enter two amounts of money. It will compare the two amounts and display whether the first amount is equal to, greater than, or less than the second amount. It also performs addition and displays the result.

### Example Output:

For `ex41.cpp`:

Enter dollar 5 Enter cents 50 The first money is: $5.50

Enter dollar 3 Enter cents 75 The second money is: $3.75

The sum is: $9.25

subtract $1.75

For `ex42.cpp`:

Enter dollar 4 Enter cents 60 The first money is: $4.60

Enter dollar 4 Enter cents 50 The second money is: $4.50

The sum is: $9.10

$4.60 is greater than $4.50


## Features

- **Arithmetic Operations**: The programs support addition and subtraction of monetary values.
- **Comparison Operators**: Overloaded comparison operators allow the user to determine if one amount of money is greater than, less than, or equal to another.
- **Error Handling**: Input validation ensures no negative values for dollars and cents are accepted.

