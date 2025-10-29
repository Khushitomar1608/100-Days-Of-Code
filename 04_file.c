#include<stdio.h>
#define PI 3.14

int main(){
    float r;

    printf("Enter the radius of the circle\n");
    scanf("%f",&r);

    printf("Area=%.2f, ", PI*r*r);
    printf("Circumference=%.2f\n", 2*PI*r);

    return 0;
}