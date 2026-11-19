// Practice August 23: Floyd’s Triangle and Pascal’s Triangle Generation.
#include <stdio.h>

void floydsTriangle(int n) {
    int val = 1;
    printf("--- Floyd's Triangle ---\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%-4d", val++);
        }
        printf("\n");
    }
}

int main() {
    floydsTriangle(5);
    return 0;
}

/*
Execution Output:
--- Floyd's Triangle ---
1   
2   3   
4   5   6   
7   8   9   10  
11  12  13  14  15  

*/

