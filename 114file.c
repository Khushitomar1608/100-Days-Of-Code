/*Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, start = 0, maxLen = 0;
    int lastIndex[256]; // ASCII character map

    printf("Enter string: ");
    scanf("%s", s);

    for (i = 0; i < 256; i++)
        lastIndex[i] = -1;

    for (i = 0; s[i] != '\0'; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start)
            start = lastIndex[(unsigned char)s[i]] + 1;

        lastIndex[(unsigned char)s[i]] = i; 

        int currLen = i - start + 1;
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}
