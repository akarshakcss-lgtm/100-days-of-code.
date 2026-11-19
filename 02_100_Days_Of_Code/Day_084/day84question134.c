//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/
#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    char input[20];
    printf("Enter status (SUCCESS, FAILURE, TIMEOUT): ");
    if (scanf("%s", input) != 1) return 0;

    enum Status s;
    if (strcmp(input, "SUCCESS") == 0) s = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0) s = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0) s = TIMEOUT;
    else {
        printf("Invalid status\n");
        return 0;
    }

    switch (s) {
        case SUCCESS: printf("Operation successful\n"); break;
        case FAILURE: printf("Operation failed\n"); break;
        case TIMEOUT: printf("Operation timed out\n"); break;
    }
    return 0;
}
