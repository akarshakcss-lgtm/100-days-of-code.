// Practice August 27: Counting Element Frequencies and Finding Duplicates.
#include <stdio.h>

int main() {
    int arr[] = {2, 3, 2, 5, 8, 3, 2, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int visited[100] = {0};

    printf("Element Frequencies:\n");
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = 1;
                count++;
            }
        }
        printf("%d appears %d time(s)\n", arr[i], count);
    }
    return 0;
}
