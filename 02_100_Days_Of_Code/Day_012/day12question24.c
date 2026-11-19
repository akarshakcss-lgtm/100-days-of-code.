#include<stdio.h>
int main()
{
    int units;
    printf("enter number of units\n");
    scanf("%d", &units);
    int bill;
    if(units<=100)
    {
        bill = units*5;
        printf("bill : %d\n", bill);
    }
    else if(units>100 && units<=200)
    {
        bill = units*7-200;
        printf("bill : %d\n", bill);
    }
    else if (units>200 && units<=300)
    {
        bill = units*10-800;
      printf("bill : %d\n", bill);
    }
    else 
    {
        bill = units*12;
        printf("bill : %d\n", bill);
    }
    return 0 ;
}