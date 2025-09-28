#include<stdio.h>
int main () 
{
   int n,sum=0 ;

   printf("Enter a no: \n") ;

while(n!=0) 
{
 scanf("%d", &n) ;
 if(n<0)
 {
    scanf("%d", &n) ;
    continue ;
 }
sum = sum+n ;
}
 printf("Sum is %d", sum) ;
 
    return 0 ;
}