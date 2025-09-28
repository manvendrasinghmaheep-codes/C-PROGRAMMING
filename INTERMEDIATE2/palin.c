#include<stdio.h>
int main () 
{
    int a,b,rem=0,sum=0 ;
    printf("Enter the number: ") ;
    scanf("%d", &a) ;
    b=a ;
    while(b!=0)
    {       
         rem= b%10 ;
       sum= sum*10 + rem ;
       b=b/10 ;
    }
    if(a==sum) 
    {
        printf("The no is palindrome.") ;
    }
    else 
    {
        printf("The no is not a palindrome.") ;
    }
    return 0 ;

}