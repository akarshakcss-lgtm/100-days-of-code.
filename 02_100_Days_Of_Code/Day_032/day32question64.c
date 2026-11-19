//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/
#include <stdio.h>

int main() {
    long long n;
    printf("Enter number:\n");
    if (scanf("%lld", &n) != 1) return 0;

    if (n < 0) n = -n;
    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int count[10] = {0};
    while (n > 0) {
        count[n % 10]++;
        n /= 10;
    }

    int maxCount = -1, bestDigit = 0;
    for (int d = 0; d <= 9; d++) {
        if (count[d] > maxCount) {
            maxCount = count[d];
            bestDigit = d;
        }
    }

    printf("%d\n", bestDigit);
    return 0;
}
