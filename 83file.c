//Count vowels and consonants in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    char ch;

    printf("Enter a string: ");
    scanf("%s", str);  

    while (str[i] != '\0') {
        ch = str[i];

        if (ch >= 'A' && ch <= 'Z')  
            ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }

        i++;
    }

    printf("Vowels=%d, Consonants=%d", vowels, consonants);

    return 0;
}
