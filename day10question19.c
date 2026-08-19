#include<stdio.h>
int main()
{
    int s1;
    printf("enter first side of triangle\n");
    scanf("%d", &s1);
    int s2;
    printf("enter second side of triangle\n");
    scanf("%d", &s2);
    int s3;
    printf("enter third side of triangle\n");
    scanf("%d", &s3);
    if(s1==s2 && s2==s3)
    {
        printf("Equilateral triangle\n");

    }
    else if(s1==s2 || s2==s3 || s1==s3)
    {
        printf("Isosceles triangle\n");
    }
    else
    {
        printf("Scalene tiangle\n");
    }
    return 0;
}