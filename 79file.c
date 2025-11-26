//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int n;
    scanf("%d %d", &n, &n);

    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Upper half + middle diagonal
    for(int s = 0; s < n; s++) {
        int i = 0, j = s;
        while(i < n && j >= 0)
            printf("%d ", a[i++][j--]);
    }

    // Lower half
    for(int s = 1; s < n; s++) {
        int i = s, j = n - 1;
        while(i < n && j >= 0)
            printf("%d ", a[i++][j--]);
    }

    return 0;
}
