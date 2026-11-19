//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter binary number: \n");
    scanf("%d", &n);

    int digit, complement = 0, place = 1;

    while(n > 0)
    {
        digit = n % 10;

        if(digit == 0)
        {
            complement += 1 * place;
        }
        else
        {
            complement += 0 * place;
        }

        place *= 10;
        n /= 10;
    }

    if(complement < place / 10)
    {
        printf("1's complement is 0%d", complement);
    }
    else
    {
        printf("1's complement is %d", complement);
    }

    return 0;
}