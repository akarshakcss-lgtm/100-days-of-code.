#include<stdio.h>
#include<math.h>
int main() {
    float P;
    printf("enter principal amount\n");
    scanf("%f" , &P);
    float R ;
    printf("enter rate of interest\n");
    scanf("%f", &R);
    float T ;
    printf("enter time\n");
    scanf("%f" , &T);
   float simple_interest = P*R*T/100 ;
   float amount = P+simple_interest;
   float compound_interest = P*pow(1+R/100,T)-P;
    printf("simple interest is : = %f\n",simple_interest);
    printf("amount =%f\n",amount);
    printf("compound interest is : %.2f\n",compound_interest);
    return 0 ;
}