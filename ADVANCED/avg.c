#include<stdio.h>

float avg(float, float, float, float, float) ;

int main () 
{
    float check ;
   check = avg(5,7,4,6,8) ;
   printf("The result is %f", check) ;
    return 0 ;
}
float avg(float a,float b,float c,float d,float e)
{
    float avg ;
    avg = (a+b+c+d+e)/5.0 ;
    return avg ;
}