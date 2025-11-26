//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    int numerator = 2, denominator = 3;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;
        numerator += 2;   // 2,4,6,8...
        denominator += 4; // 3,7,11,15...
    }

    printf("Approximate sum: %.2lf", sum);

    return 0;
}
