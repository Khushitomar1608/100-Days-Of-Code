//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digits = 0, first, last, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    // count digits
    while(temp >= 10) {
        temp /= 10;
        digits++;
    }

    first = temp;

    // If first and last are same, number remains same
    if(first == last) {
        printf("%d", n);
        return 0;
    }

    result = n - first * pow(10, digits) - last + last * pow(10, digits) + first;
    printf("%d", result);

    return 0;
}
