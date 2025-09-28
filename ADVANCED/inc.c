#include<stdio.h>

int increment(int) ;

int main () 
{
   int a = 1,b ;
   b = increment(1) ;                 //demonstrate that only copy of value is passed not the actual value thus
printf("%d %d", b, a) ;               // the original value remains preserved

    return 0 ;
}
 int increment (int a)
{
    return a+1 ;
}