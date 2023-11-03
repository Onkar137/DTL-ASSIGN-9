#include <stdio.h>
#include <math.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /, ^, d): ");
    scanf(" %c", &operator);

    if (operator != 'd') {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    }

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed\n");
                return 1; // Exit with an error code
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 'd':
            printf("Enter a decimal number: ");
            scanf("%lf", &num1);
            int integerPart = (int)num1;
            double fractionalPart = num1 - integerPart;
            printf("Decimal to Hexadecimal: %X.%X\n", integerPart, (int)(fractionalPart * 16));
            return 0;
        default:
            printf("Error: Invalid operator\n");
            return 1; // Exit with an error code
    }

    printf("Result: %.2lf\n", result);

    return 0;
}
