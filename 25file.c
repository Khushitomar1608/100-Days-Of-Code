//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter two numbers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+':
            printf("%d", a + b);
            break;

        case '-':
            printf("%d", a - b);
            break;

        case '*':
            printf("%d", a * b);
            break;

        case '/':
            if (b == 0)
                printf("Cannot divide by zero");
            else
                printf("%d", a / b);
            break;

        case '%':
            if (b == 0)
                printf("Cannot mod by zero");
            else
                printf("%d", a % b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
