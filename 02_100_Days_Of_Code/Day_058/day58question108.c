//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[100];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int ans[100];
    for (int i = 0; i < n; i++) {
        int prod = 1;
        for (int j = 0; j < n; j++) {
            if (i != j) prod *= nums[j];
        }
        ans[i] = prod;
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", ans[i], (i == n - 1) ? "" : ",");
    }
    printf("]\n");
    return 0;
}
