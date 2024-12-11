#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Displaying the available operators
    printf("Select operation:\n");
    printf(" + for Addition\n");
    printf(" - for Subtraction\n");
    printf(" * for Multiplication\n");
    printf(" / for Division\n");

    // Getting user input
    printf("Enter operator: ");
    scanf(" %c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Performing the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.1lf + %.1lf = %.1lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.1lf - %.1lf = %.1lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.1lf * %.1lf = %.1lf\n", num1, num2, result);
            break;
        case '/':
            // Checking for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.1lf / %.1lf = %.1lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
