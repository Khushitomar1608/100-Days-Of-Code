//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int n, temp, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if(rev == n) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}
