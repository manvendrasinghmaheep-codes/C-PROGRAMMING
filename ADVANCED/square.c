#include<stdio.h>

int square(int) ;
int result ;

int main () 
{
    result = square(5) ;
    printf("Result is %d", result) ;
    return 0 ;
}
int square(int a)
{
    int square ;
    square = a*a ;
   return square ;
}