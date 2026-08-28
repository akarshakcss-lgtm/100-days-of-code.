// Practice August 28: Statistical Computations on Arrays (Mean, Variance, StdDev).
#include <stdio.h>
#include <math.h>

int main() {
    double data[] = {10.5, 20.0, 15.2, 30.1, 24.8};
    int n = sizeof(data) / sizeof(data[0]);

    double sum = 0.0;
    for (int i = 0; i < n; i++) sum += data[i];
    double mean = sum / n;

    double variance = 0.0;
    for (int i = 0; i < n; i++) variance += pow(data[i] - mean, 2);
    variance /= n;
    double stdDev = sqrt(variance);

    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stdDev);
    return 0;
}
