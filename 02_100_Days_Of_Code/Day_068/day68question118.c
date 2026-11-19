//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array (array contains n elements, values from 0 to n):\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        actualSum += val;
    }

    printf("%lld\n", expectedSum - actualSum);
    return 0;
}
