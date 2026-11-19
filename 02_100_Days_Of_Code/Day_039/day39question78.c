//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
Diagonal Sum = 15
*/
#include <stdio.h>

int main() {
    int n, m, sum = 0;
    printf("Enter rows and cols:\n");
    if (scanf("%d %d", &n, &m) != 2) return 0;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int val;
            scanf("%d", &val);
            if (i == j) sum += val;
        }
    }

    printf("Diagonal Sum = %d\n", sum);
    return 0;
}
