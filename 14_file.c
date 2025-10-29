#include<stdio.h>

int main(){
    char alph;

    printf("Enter an alphabet\n");
    scanf("%c",&alph);

    if (alph>='A' && alph<='Z'){
        alph= alph+32;
    }

    if (alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u')
    printf("Vowel");

    else
    printf("Consonant");

    return 0;
}