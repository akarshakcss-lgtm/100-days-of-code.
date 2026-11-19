//Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and cols:\n");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    int rowSum[50] = {0};
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val;
            scanf("%d", &val);
            rowSum[i] += val;
        }
    }

    for (int i = 0; i < r; i++) {
        printf("%d%s", rowSum[i], (i == r - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
