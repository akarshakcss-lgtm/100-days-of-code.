//Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and cols:\n");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    int mat[50][50];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int first = 1;
    for (int s = 0; s <= r + c - 2; s++) {
        if (s % 2 == 0) {
            // Upward
            int i = (s < r) ? s : r - 1;
            int j = s - i;
            while (i >= 0 && j < c) {
                if (!first) printf(" ");
                printf("%d", mat[i][j]);
                first = 0;
                i--;
                j++;
            }
        } else {
            // Downward
            int j = (s < c) ? s : c - 1;
            int i = s - j;
            while (j >= 0 && i < r) {
                if (!first) printf(" ");
                printf("%d", mat[i][j]);
                first = 0;
                i++;
                j--;
            }
        }
    }
    printf("\n");
    return 0;
}
