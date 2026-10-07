//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[100];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    // Boyer-Moore Voting
    int candidate = nums[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (nums[i] == candidate) count++;
        else count--;
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        }
    }

    int verify = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) verify++;
    }

    if (verify > n / 2) printf("%d\n", candidate);
    else printf("-1\n");
    return 0;
}
