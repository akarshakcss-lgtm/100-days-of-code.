//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5
*/
#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array:\n");
    if (scanf("%d", &n1) != 1) return 0;
    int a[100];
    printf("Enter first array elements:\n");
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of second array:\n");
    if (scanf("%d", &n2) != 1) return 0;
    int b[100];
    printf("Enter second array elements:\n");
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    int merged[200];
    for (int i = 0; i < n1; i++) merged[i] = a[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = b[i];

    for (int i = 0; i < n1 + n2; i++) {
        printf("%d%s", merged[i], (i == n1 + n2 - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
