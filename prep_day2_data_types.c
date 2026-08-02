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
