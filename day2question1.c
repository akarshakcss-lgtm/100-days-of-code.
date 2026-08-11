//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30
Input 2:
3 7
Output 2:
Area=21, Perimeter=20
*/
#include<stdio.h>
int main() {
int length ;
int breadth;
printf("enter length of a rectangle\n");
scanf("%d", &length) ;
printf("enter the breath of the rectangle\n");
scanf("%d", &breadth);
int perimeter = 2*(length+breadth);
printf("perimeter = %d\n", perimeter);
int area = length*breadth;
printf("area = %d\n", area);
return 0;
}