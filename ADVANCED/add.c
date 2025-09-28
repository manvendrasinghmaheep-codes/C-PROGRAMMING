#include<stdio.h>

int add (int a, int b, int c, int d) ;
int check ;

int main () 
{
    check = add(1,2,3,4) ;
    printf("The result is %d", check) ;
    return 0 ;
}
int add(int a, int b, int c, int d)
{
    return a+b+c+d ;
}