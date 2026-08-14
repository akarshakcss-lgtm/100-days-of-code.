// Practice August 14: Comprehensive Number Manipulation and Extraction.
#include <stdio.h>

int main() {
    int num = 12345;
    int temp = num;
    int count = 0, sum = 0, rev = 0;

    while (temp > 0) {
        int d = temp % 10;
        count++;
        sum += d;
        rev = rev * 10 + d;
        temp /= 10;
    }

    printf("Number: %d\n", num);
    printf("Total Digits: %d\n", count);
    printf("Sum of Digits: %d\n", sum);
    printf("Reversed: %d\n", rev);
    return 0;
}
