#include <stdio.h>

// Function declarations
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    float num1, num2, result;
    int choice;

    // Display menu and get user choice
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Get input numbers
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);


    // Perform calculation based on user choice
    switch (choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = divide(num1, num2);
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select from 1 to 4.\n");
            break;
    }

    return 0;
}

// Function definitions
float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    return num1 / num2;
}
