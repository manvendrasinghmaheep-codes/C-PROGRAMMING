#include<stdio.h>
int main ()
{
    float km ;
    double miles ;
    printf("Enter the distance in km: ") ;
    scanf("%f", &km) ;
    miles = 0.621*km ;
    printf("The distance is miles is %.5lf", miles) ;

    return 0 ;
}