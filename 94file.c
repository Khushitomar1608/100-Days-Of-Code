//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);  

    while (str[i] != '\0') {
        char word[50];
        int k = 0;

        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[k++] = str[i++];
        }

        word[k] = '\0';

        if (k > maxLen) {
            maxLen = k;
            strcpy(longest, word);
        }

        if (str[i] != '\0') i++;
    }

    printf("%s", longest);

    return 0;
}
