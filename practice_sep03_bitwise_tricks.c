// Practice September 3: Essential Bitwise Manipulation Tricks for Competitive Programming.
#include <stdio.h>

int isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n &= (n - 1); // clear lowest set bit
        count++;
    }
    return count;
}

int findSingleNumber(int arr[], int n) {
    int res = 0;
    for (int i = 0; i < n; i++) res ^= arr[i];
    return res;
}

int main() {
    printf("Is 16 power of two? %s\n", isPowerOfTwo(16) ? "Yes" : "No");
    printf("Is 18 power of two? %s\n", isPowerOfTwo(18) ? "Yes" : "No");
    printf("Set bits in 29: %d\n", countSetBits(29));

    int arr[] = {4, 1, 2, 1, 2};
    printf("Single unique number in [4, 1, 2, 1, 2]: %d\n", findSingleNumber(arr, 5));
    return 0;
}

/*
Execution Output:
Is 16 power of two? Yes
Is 18 power of two? No
Set bits in 29: 4
Single unique number in [4, 1, 2, 1, 2]: 4

*/

