//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], last[50];
    int i = 0, j = 0;

    printf("Enter a full name: ");
    fgets(str, sizeof(str), stdin);

    if (str[0] != ' ')
        printf("%c.", str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n') {
            printf("%c.", str[i+1]);
        }
        i++;
    }

    i = strlen(str) - 1;

    if (str[i] == '\n') i--;
    while (i >= 0 && str[i] != ' ')
        i--;
    i++;  
    while (str[i] != '\0' && str[i] != '\n') {
        last[j++] = str[i++];
    }
    last[j] = '\0';

    printf(" %s", last);

    return 0;
}
