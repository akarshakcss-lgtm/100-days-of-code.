#include <stdio.h>
#include <math.h>
int main() {
    float P, R, T;
    printf("enter principal amount\n");
    scanf("%f", &P);
    printf("enter rate of interest\n");
    scanf("%f", &R);
    printf("enter time in years\n");
    scanf("%f", &T);
    float simple_interest = (P * R * T) / 100.0;
    printf("simple interest is %.2f\n", simple_interest);
    float total_amount = P + simple_interest;
    printf("total amount is %.2f\n", total_amount);
    float compound_interest = P * (pow(1.0 + R / 100.0, T)) - P;
    printf("compound_interest is %.2f\n", compound_interest);
    return 0;
}

