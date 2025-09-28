#include<stdio.h>
int main () 
{
int n ;
   printf("Enter a no: \n") ;
   while(n!=0)
   {
    scanf("%d", &n) ;
    if(n==-1)
    {
        break ;
    }
    printf("\nThe square is %d\n", n*n) ;

   }
   
    return 0 ;
}