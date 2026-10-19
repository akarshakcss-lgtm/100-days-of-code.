//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15
*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter sizes m and n:\n");
    if (scanf("%d %d", &m, &n) != 2) return 0;

    int a[100], b[100];
    printf("Enter first sorted array:\n");
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    printf("Enter second sorted array:\n");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int res[200], i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) res[k++] = a[i++];
        else res[k++] = b[j++];
    }
    while (i < m) res[k++] = a[i++];
    while (j < n) res[k++] = b[j++];

    for (int x = 0; x < k; x++) {
        printf("%d%s", res[x], (x == k - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
