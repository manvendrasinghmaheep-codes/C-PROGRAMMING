#include<stdio.h>
int main () 
{
   int n ;
   printf("Enter a no: \n") ;
   while(n!=0)
   {
    scanf("%d", &n) ;
    if(n%2==1)
    {
        continue ;
    }
    printf("\nThe number is %d\n", n) ;

   }

    return 0 ;
}