#include<stdio.h>

int main(){
    int totalsec,sec,min,hrs;

    printf("Enter time in seconds:\n");
    scanf("%d",&totalsec);

    sec= totalsec % 60;
    min= (totalsec % 3600)/60;
    hrs= totalsec/3600;

    printf("%d: ",hrs);
    printf("%d: ",min);
    printf("%d",sec);

    return 0;
}