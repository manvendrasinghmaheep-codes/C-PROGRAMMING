#include<stdio.h>

float max (float x, float y) ;
float a,b,c ;

int main () 
{
    printf("Enter two numbers: \n") ;
    scanf("%f %f", &a, &b) ;
    c = max(a, b) ;
    printf("The bigger no is %f", c) ;
    return 0 ;
}
float max(float x, float y) 
{
    return (x>y)?x:y ;
}