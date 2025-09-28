#include<stdio.h>
int main () 
{
    int a,sum=0 ;
    printf("Enter a number: ") ;
    scanf("%d", &a) ;
    
        for(int i = 1 ; i<=a ; i=i+2)
        {
           sum = i + sum ;
        }
    printf("The sum of all odds between 1 and %d is = %d", a, sum) ;
    
    return 0 ;

}