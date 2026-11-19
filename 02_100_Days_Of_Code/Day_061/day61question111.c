//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6
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

    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
        for (int j = i; j < i + k; j++) {
            if (arr[j] < 0) {
                firstNeg = arr[j];
                break;
            }
        }
        printf("%d%s", firstNeg, (i == n - k) ? "" : " ");
    }
    printf("\n");
    return 0;
}
