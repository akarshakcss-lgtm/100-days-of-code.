//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
Sum = 10
*/
#include <stdio.h>

int main() {
    int r, c, sum = 0;
    printf("Enter rows and columns:\n");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) return 0;

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val;
            scanf("%d", &val);
            sum += val;
        }
    }

    printf("Sum = %d\n", sum);
    return 0;
}
