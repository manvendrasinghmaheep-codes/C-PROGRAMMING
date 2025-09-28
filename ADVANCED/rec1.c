#include<stdio.h>

int fibo(int) ;

int main () 
{
    int num ;
   printf("Enter the series term: \n") ;
   scanf("%d", &num) ;
   for(int i = 0 ; i<num ; i++)
   {
    printf("THE SERIES IS : %d\n", fibo(i)) ;
   }
    return 0 ;
}
int fibo(int num)
{
    if(num==0)
    return 0 ;
    else if(num==1) 
    return 1 ;
    else 
    return fibo(num-1) + fibo(num-2) ;
}
