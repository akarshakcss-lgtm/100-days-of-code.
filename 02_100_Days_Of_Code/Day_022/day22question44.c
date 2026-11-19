//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms:\n");
    if (scanf("%d", &n) != 1) return 0;

    double sum = 0.0;
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0;
        } else {
            sum += (double)(2 * i - 1) / (2 * i);
        }
    }

    printf("Approximate sum: %.1f\n", sum);
    return 0;
}
