// Preparation Day 5: ASCII Character Set and Conversions.
#include <stdio.h>

int main() {
    printf("--- ASCII Table Sample (32 to 126) ---\n");
    for (int i = 32; i <= 126; i++) {
        printf("%3d: %c  ", i, (char)i);
        if ((i - 31) % 6 == 0) printf("\n");
    }
    printf("\n");
    return 0;
}
