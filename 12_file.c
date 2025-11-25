//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>

int main(){
    int num;

    printf("Enter a number\n");
    scanf("%d",&num);

    
    if (num == 0)
    printf("Zero");

   else if  (num>=0)
    printf("Positive");

    else
    printf("Negative");
    
    return 0;
}