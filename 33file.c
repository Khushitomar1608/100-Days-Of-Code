//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, sum = 0, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

  
    while(temp != 0) {
        count++;
        temp /= 10;
    }

    temp = n;

   while(temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if(sum == n) {
        printf("Armstrong");
    } else {
        printf("Not Armstrong");
    }

    return 0;
}
