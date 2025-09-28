#include<stdio.h>
int main () 
{
    int n,a,sum=0,rem=0 ;
    printf("Enter the number: ") ;
    scanf("%d", &n) ;
     a=n ;
    while(a!=0) {
       rem= a%10 ;
       sum = sum + rem*rem*rem ;
       a=a/10 ;

    }
    if(sum==n) 
    {
        printf("%d is armstrong.", n) ;
    }
    else
    {
        printf("%d is not an armstrong.", n) ;

    }
    return 0 ;

}