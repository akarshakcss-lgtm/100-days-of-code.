//Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:
Output 1:
*****
 ****
  ***
   **
    *
*/
#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int j = 0; j < n - i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
