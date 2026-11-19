//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
30
Output 1:
Found at index 2

Input 2:
4
1 2 3 4
9
Output 2:
Not found
*/
#include <stdio.h>

int main() {
    int n, key, found = -1;
    printf("Enter number of elements:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int arr[100];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter search element:\n");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Found at index %d\n", found);
    } else {
        printf("Not found\n");
    }
    return 0;
}
