//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
Output 1:
5 4 3 2 1
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

    int left = 0, right = n - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
