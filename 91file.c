//Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[100], result[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u') {
            result[j] = str[i];
            j++;
        }
        i++;
    }

    result[j] = '\0';   

    printf("%s", result);

    return 0;
}
