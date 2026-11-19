//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number:\n");
    if (scanf("%d", &n) != 1) return 0;

    if (n == 0) {
        printf("0\n");
        return 0;
    }

    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}
