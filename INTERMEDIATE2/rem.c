#include<stdio.h>
int main () 
{
    int a,b,sum=0,rem ;
    printf("Enter a number: ") ;
    scanf("%d", &a) ;
    b = a ;
    while(b!=0)
    {
      rem = b%10 ;
      sum = sum+rem ;
      b = b/10 ;
    }
    printf("The sum of digits of %d the is %d", a, sum) ;
    return 0 ;

}