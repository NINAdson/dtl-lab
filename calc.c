#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Ask the user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // note the space before %c to ignore any leftover newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the operation
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            else
                printf("Error! Division by 0.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
