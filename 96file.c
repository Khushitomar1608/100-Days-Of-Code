//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char word[], int len) {
    int i = 0, j = len - 1;
    while (i < j) {
        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[200];
    char word[50];
    int i = 0, k = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        k = 0;
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[k++] = str[i++];
        }
        word[k] = '\0';
        reverse(word, k);

        printf("%s", word);

        if (str[i] == ' ') {
            printf(" ");
            i++;
        } else {
            break;
        }
    }

    return 0;
}
