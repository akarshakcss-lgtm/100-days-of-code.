//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
12 35 1 10 34
Output 1:
Second Largest = 34
*/
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter size:\n");
    if (scanf("%d", &n) != 1 || n < 2) return 0;

    int arr[100];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No second largest element\n");
    } else {
        printf("Second Largest = %d\n", second);
    }
    return 0;
}
