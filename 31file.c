//Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, i;
    int binary[32];  

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0) {
        printf("0");
        return 0;
    }

    i = 0;
    while(n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // print in reverse order
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    return 0;
}

