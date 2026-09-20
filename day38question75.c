//Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
5 6
7 8
Output 1:
6 8
10 12
*/
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and cols:\n");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    int a[50][50], b[50][50];
    printf("Enter matrix A:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter matrix B:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d%s", a[i][j] + b[i][j], (j == c - 1) ? "" : " ");
        }
        printf("\n");
    }
    return 0;
}
