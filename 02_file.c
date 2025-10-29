#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the first and second number:\n");
    scanf("%d %d", &a, &b);

    printf("Sum=%d, ", a + b);
    printf("Diff=%d, ", a - b);
    printf("Product=%d, ", a * b);

    if (b == 0)
        printf("Division by zero is not allowed\n");
    else
        printf("Quotient=%d\n", a / b);

    return 0;
}
