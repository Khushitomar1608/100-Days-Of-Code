#include<stdio.h>

int main(){
    float celsius;

    printf("Enter the temperature in celsius\n");
    scanf("%f",&celsius);

    printf("Fahrenheit=%.2f",(9.0/5.0*celsius)+32);

    return 0;
}