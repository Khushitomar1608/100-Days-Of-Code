#include<stdio.h>

int main(){
    int length,breadth;

printf("Enter the length and breadth of the rectangle:\n");
scanf("%d %d",&length, &breadth);

printf("Area=%d, ",length*breadth);
printf("Perimeter=%d\n", 2*(length+breadth));

    return 0;
}