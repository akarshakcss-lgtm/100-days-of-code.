#include<stdio.h>
int main ()
{
    int marks;
    printf("enter marks\n");
    scanf("%d", &marks);
    if(marks>=90 && marks<=100)
    {
        printf("A grade\n");
    }
    else if(marks>=80 && marks<89)
    {
        printf("B grade\n");
    }
    else if(marks>=70 && marks<79)
    {
        printf("C grade\n");
    }
    else if(marks>=60 && marks<69)
    {
        printf("D grade\n");
    }
    else
    {
        printf("F grade\n");
    }
    return 0;
}