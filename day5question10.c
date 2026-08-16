#include<stdio.h>
int main (){
    int total_seconds ;
    printf("enter total seconds\n");
    scanf("%d", &total_seconds);
    int hours = total_seconds /3600 ;
    int minutes = (total_seconds % 3600)/60 ;
    int seconds = total_seconds % 60 ;
 printf("seconds convert into hours:minutes:seconds is = \n%d%d%d", hours, minutes ,seconds);
return 0 ;
}
