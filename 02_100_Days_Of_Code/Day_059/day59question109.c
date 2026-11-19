//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700
*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[100];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter k:\n");
    scanf("%d", &k);

    if (k > n || k <= 0) return 0;

    int curSum = 0;
    for (int i = 0; i < k; i++) curSum += arr[i];

    int maxSum = curSum;
    for (int i = k; i < n; i++) {
        curSum += arr[i] - arr[i - k];
        if (curSum > maxSum) maxSum = curSum;
    }

    printf("%d\n", maxSum);
    return 0;
}
