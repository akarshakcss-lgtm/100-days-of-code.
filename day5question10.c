#include<stdio.h>
int main (){
    int total_seconds;
    printf("enter total_seconds\n");
    scanf("%d", &total_seconds);
    int hours = total_seconds/3600;
    int minutes = (total_seconds%3600)/60;
    int seconds = (total_seconds%60);
    printf("afte converting seconds hours:minutes:seconds format \n= %d%d%d", hours,minutes,seconds);
    return 0; 
}