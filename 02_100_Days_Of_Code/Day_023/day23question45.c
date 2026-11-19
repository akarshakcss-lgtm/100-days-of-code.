//Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 1.8

Input 2:
4
Output 2:
Approximate sum: 2.3
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms:\n");
    if (scanf("%d", &n) != 1) return 0;

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        double num = 2.0 * i;
        double den = 4.0 * i - 1.0;
        sum += num / den;
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
