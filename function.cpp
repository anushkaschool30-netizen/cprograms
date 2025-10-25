//With the help of 4 user-defined functions, design a basic calculator capable of addition, subtraction, 
//multiplication and division
#include <stdio.h>

double add(double num1, double num2) 
{
    return num1 + num2;
}
double subtract(double num1, double num2)
 {
    return num1 - num2;
}
double multiply(double num1, double num2) 
{
    return num1 * num2;
}
double divide(double num1, double num2) 
{
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0; 
    }
    return num1 / num2;
}

int main()
{
    double num1, num2, result;
    char opp;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &opp);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (opp) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = subtract(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = multiply(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            result = divide(num1, num2);
            if (num2 != 0) 
			{ 
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
