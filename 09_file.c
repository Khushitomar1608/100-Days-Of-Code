#include<stdio.h>
#include<math.h>

int main(){
    double p,r,t,A;

    printf("Enter the principal amount, rate and time:\n");
    scanf("%lf %lf %lf" ,&p, &r, &t);

    printf("Simple Interest=%.2lf, ",(p*r*t)/100);

    A= p*pow((1+r/100),t);

    printf("Compound Interest=%.2lf", A-p);

    return 0;
}