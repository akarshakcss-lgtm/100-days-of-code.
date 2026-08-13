#include<stdio.h>
int main (){
    int n1;
    printf("enter first number\n");
    scanf("%d", &n1);
    int n2;
    printf("enter second number\n");
    scanf("%d", &n2);
    n1,n2 = n2,n1 ;
    printf("afters swap %d %d", n1,n2);
    return 0;
}