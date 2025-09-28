#include<stdio.h>
int main () 
{
    int n1 ;
    do
    {
       printf("Enter positive no only\n") ;
       scanf("%d", &n1) ;
    }
     while (n1<=0);
    
    return 0 ;
}