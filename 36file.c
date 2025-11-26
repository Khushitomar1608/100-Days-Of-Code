//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, temp, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    hcf = x;
    printf("%d", hcf);

    return 0;
}
