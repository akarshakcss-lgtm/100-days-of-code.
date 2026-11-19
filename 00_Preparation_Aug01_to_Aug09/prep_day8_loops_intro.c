// Preparation Day 8: Iteration Structures (for, while, do-while, break, continue).
#include <stdio.h>

int main() {
    printf("For Loop (1 to 5): ");
    for (int i = 1; i <= 5; i++) printf("%d ", i);
    printf("\n");

    printf("While Loop with continue: ");
    int w = 0;
    while (w < 6) {
        w++;
        if (w == 3) continue;
        printf("%d ", w);
    }
    printf("\n");

    printf("Do-While Loop: ");
    int d = 1;
    do {
        printf("%d ", d);
        d++;
    } while (d <= 3);
    printf("\n");

    return 0;
}

/*
Execution Output:
For Loop (1 to 5): 1 2 3 4 5 
While Loop with continue: 1 2 4 5 6 
Do-While Loop: 1 2 3 

*/

