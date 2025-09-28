#include<stdio.h>
#include<limits.h>

//shows unsigned wraps to 0 while int to negative no.
int main ()
{
    int a = INT_MAX;
    unsigned int b = UINT_MAX ;
    printf("%d %u", a+1, b+1);
    
    return 0 ;
}