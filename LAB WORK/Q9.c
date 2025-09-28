#include<stdio.h>
#include<math.h>

int main ()
{
    int bmi2 ;
    float m,kg ;
    float bmi1 ;
 printf("Enter height in meters: \n") ;
   scanf("%f", &m) ;
    printf("Enter mass in kg: \n") ;
   scanf("%f", &kg) ;

   bmi1 = (float)kg/ m*m ;
   bmi2 = ceil(bmi1) ;
  if(bmi2 > 0 && bmi2 <= 18)
        printf("Underweight\n");
    else if(bmi2 > 18 && bmi2 <= 25)
        printf("Normal weight\n");
    else if(bmi2 > 25)
        printf("Overweight\n");
    else
        printf("Invalid input!\n");
    return 0 ;
}