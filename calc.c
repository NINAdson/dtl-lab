#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_hex(const char* str) {
    return (str[0] == '0' && (str[1] == 'x' || str[1] == 'X'));
}

int main() {
    char operator;
    char input1[100], input2[100];
    double num1, num2;

    // Ask the user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // space before %c to skip newline

    printf("Enter two numbers (decimal or hex with 0x prefix): ");
    scanf("%s %s", input1, input2);

    // Detect if input is hexadecimal or decimal
    if (is_hex(input1))
        num1 = (double)strtol(input1, NULL, 16);
    else
        num1 = atof(input1);

    if (is_hex(input2))
        num2 = (double)strtol(input2, NULL, 16);
    else
        num2 = atof(input2);

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
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
