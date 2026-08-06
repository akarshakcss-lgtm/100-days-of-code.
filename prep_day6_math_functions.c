// Preparation Day 6: Standard Mathematical Functions in math.h.
#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0, y = 3.0;
    double val = -4.75;

    printf("sqrt(%.2f) = %.2f\n", x, sqrt(x));
    printf("pow(%.2f, %.2f) = %.2f\n", x, y, pow(x, y));
    printf("fabs(%.2f) = %.2f\n", val, fabs(val));
    printf("ceil(%.2f) = %.2f\n", val, ceil(val));
    printf("floor(%.2f) = %.2f\n", val, floor(val));
    return 0;
}

/*
Execution Output:
sqrt(9.00) = 3.00
pow(9.00, 3.00) = 729.00
fabs(-4.75) = 4.75
ceil(-4.75) = -4.00
floor(-4.75) = -5.00

*/

