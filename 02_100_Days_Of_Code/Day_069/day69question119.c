//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int seen[10000] = {0};
    int repeated = -1;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        if (seen[val] && repeated == -1) {
            repeated = val;
        }
        seen[val] = 1;
    }

    printf("%d\n", repeated);
    return 0;
}
