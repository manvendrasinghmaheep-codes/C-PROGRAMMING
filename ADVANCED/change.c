#include<stdio.h>
int main ()
{
    int i = 5 ;
    int *ptr = &i ;
    *ptr = *(&i) + 1 ;
    i = *ptr ;
    printf("The value of i is = %d", i) ;

    return 0 ;
}