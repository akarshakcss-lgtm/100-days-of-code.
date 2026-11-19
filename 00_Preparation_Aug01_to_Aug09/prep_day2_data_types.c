// Preparation Day 2: Basic Data Types, Memory Sizes, and Limits in C.
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("--- C Fundamental Data Types & Sizes ---\n");
    printf("char:        %zu bytes | Min: %d, Max: %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("short:       %zu bytes | Min: %d, Max: %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("int:         %zu bytes | Min: %d, Max: %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("long:        %zu bytes | Min: %ld, Max: %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("long long:   %zu bytes | Min: %lld, Max: %lld\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("float:       %zu bytes | Min: %e, Max: %e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double:      %zu bytes | Min: %e, Max: %e\n", sizeof(double), DBL_MIN, DBL_MAX);
    return 0;
}

/*
Execution Output:
--- C Fundamental Data Types & Sizes ---
char:        1 bytes | Min: -128, Max: 127
short:       2 bytes | Min: -32768, Max: 32767
int:         4 bytes | Min: -2147483648, Max: 2147483647
long:        4 bytes | Min: -2147483648, Max: 2147483647
long long:   8 bytes | Min: -9223372036854775808, Max: 9223372036854775807
float:       4 bytes | Min: 1.175494e-038, Max: 3.402823e+038
double:      8 bytes | Min: 2.225074e-308, Max: 1.797693e+308

*/

