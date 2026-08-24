// Practice August 24: Base Conversions (Decimal to Binary, Octal, Hexadecimal).
#include <stdio.h>

void printBinary(int n) {
    for (int i = 31; i >= 0; i--) {
        int k = n >> i;
        if (k & 1) printf("1");
        else printf("0");
    }
    printf("\n");
}

int main() {
    int n = 42;
    printf("Decimal:     %d\n", n);
    printf("Octal:       %o\n", n);
    printf("Hexadecimal: %X\n", n);
    printf("32-bit Bin:  ");
    printBinary(n);
    return 0;
}
