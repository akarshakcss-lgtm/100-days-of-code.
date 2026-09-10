//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
1 2 3 4 5
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[100];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
