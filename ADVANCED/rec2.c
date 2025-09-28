#include<stdio.h>

int palindrome(int, int) ;
int num ;

int main () 
{
    int b ;
    printf("Enter a number: \n") ;
    scanf("%d", &num) ;
    b = palindrome(num, 0) ;
    if(b==num)
    printf("%d is palindrome", b) ;
    else 
    printf("%d is not palindrome", num) ;

    return 0 ;
}
int palindrome(int a, int rem) 
{
   if(a==0)
   return rem ;
   return palindrome(a/10, rem*10 + a%10) ;
}