#include <stdio.h>

// Function to add two numbers
float add(float a, float b) {
    return a + b;
}

// Function to subtract two numbers
float subtract(float a, float b) {
    return a - b;
}

// Function to multiply two numbers
float multiply(float a, float b) {
    return a * b;
}

// Function to divide two numbers
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Error! Operator is not correct\n");
            return -1;
    }

    printf("Result: %.2f %c %.2f = %.2f\n", num1, operator, num2, result);

    return 0;
}
