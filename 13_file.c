//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>

int main(){
    int year;

    printf("Enter year\n");
    scanf("%d",&year);

    if ((year%4==0 && year%100!=0 )|| (year%400==0))
    printf("Leap year");

    else
    printf("Not a Leap year");

    return 0;
}