//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main()
{
    int num1;
    int num2;
    char op;
  if (scanf("%d %d %c", &num1, &num2, &op) != 3);
    switch(op)
    {
        case '+':
         printf("%d", num1+num2);
         break;
         case '-':
         printf("%d", num1-num2);
         break;
         case '*':
          printf("%d", num1*num2);
          break;
          case '/':
          if(num2==0)
          {
            printf("division by zero is not possible");
          }
          else
          {
          printf("%d", num1/num2);
          }
          break;
          case '%':
          if(num2==0)
          {
            printf("division by zero is not possible");
          }
            else
            {
                printf("%d", num1%num2);
            }
            break;
            default:
            printf("invalid operator");
    }
    return 0 ;
}