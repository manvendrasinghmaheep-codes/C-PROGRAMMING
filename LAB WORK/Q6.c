#include<stdio.h>
int main () 
{
   int num,num100,num50,num10,a,b ;

   printf("Enter the required withdrawl amount: \n") ;
   scanf("%d", &num) ;
 
   num100 = num/100 ;
   a = num%100 ;
   num50 = a/50 ;
   b = a%50 ;
   num10 = b/10 ;

   printf("The 100s notes required are: %d\n", num100) ;
    printf("The 50s notes required are: %d\n", num50) ;
     printf("The 10s notes required are: %d", num10) ;

    return 0 ;
    
}