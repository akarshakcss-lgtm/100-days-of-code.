//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
25
Output 1:
10 20 25 30 40 50
*/
#include <stdio.h>

int main() {
    int n, val;
    printf("Enter size:\n");
    if (scanf("%d", &n) != 1) return 0;

    int arr[105];
    printf("Enter sorted elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter value to insert:\n");
    scanf("%d", &val);

    int i = n - 1;
    while (i >= 0 && arr[i] > val) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = val;
    n++;

    for (int j = 0; j < n; j++) {
        printf("%d%s", arr[j], (j == n - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
