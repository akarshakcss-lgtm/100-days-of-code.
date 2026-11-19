//Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
1 0
0 1
Output 1:
1 2
3 4
*/
#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Enter dimensions of first matrix:\n");
    if (scanf("%d %d", &r1, &c1) != 2) return 0;

    int a[50][50], b[50][50], res[50][50] = {0};
    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    }

    printf("Enter dimensions of second matrix:\n");
    if (scanf("%d %d", &r2, &c2) != 2) return 0;

    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    }

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d%s", res[i][j], (j == c2 - 1) ? "" : " ");
        }
        printf("\n");
    }
    return 0;
}
