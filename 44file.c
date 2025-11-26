//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0;
    int numerator = 1, denominator = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i == 1) {
            sum += 1;  // first term
        } else {
            numerator += 2;   // 3,5,7...
            denominator += 2; // 4,6,8...
            sum += (double)numerator / denominator;
        }
    }

    printf("Approximate sum: %.2lf", sum);

    return 0;
}
