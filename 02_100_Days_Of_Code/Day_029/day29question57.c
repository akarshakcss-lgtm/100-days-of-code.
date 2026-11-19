//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
Sum = 10
*/
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter number of elements:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[100];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}
