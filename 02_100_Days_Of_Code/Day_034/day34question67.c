//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
1 2 4 5
2 3
Output 1:
1 2 3 4 5
*/
#include <stdio.h>

int main() {
    int n, pos, val;
    printf("Enter size:\n");
    if (scanf("%d", &n) != 1) return 0;

    int arr[105];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter index and value:\n");
    scanf("%d %d", &pos, &val);

    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    n++;

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}
