//Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, digit, product = 1;
    int hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) n = -n; // handle negative numbers

    while(n != 0) {
        digit = n % 10;
        if(digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if(!hasOdd) product = 1; // no odd digits, product = 1

    printf("%d", product);

    return 0;
}


