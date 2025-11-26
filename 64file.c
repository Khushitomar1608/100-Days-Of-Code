//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long n;
    scanf("%ld",&n);
    int freq[10]={0};
    if(n<0) n=-n;
    while(n>0){
        int d=n%10;
        freq[d]++;
        n/=10;
    }
    int max=0,digit=0;
    for(int i=0;i<10;i++){
        if(freq[i]>max){
            max=freq[i];
            digit=i;
        }
    }
    printf("%d", digit);
    return 0;
}
