//Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
2 4 5
3 5 6
Output 1:
Symmetric

Input 2:
2 2
1 2
3 4
Output 2:
Not Symmetric
*/
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and cols:\n");
    if (scanf("%d %d", &r, &c) != 2) return 0;

    if (r != c) {
        printf("Not Symmetric\n");
        return 0;
    }

    int mat[50][50];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int sym = 1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mat[i][j] != mat[j][i]) {
                sym = 0;
                break;
            }
        }
        if (!sym) break;
    }

    if (sym) printf("Symmetric\n");
    else printf("Not Symmetric\n");
    return 0;
}
