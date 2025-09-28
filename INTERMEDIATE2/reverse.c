#include<stdio.h>
int main () 
{
    int a,rem=0,sum=0;
    printf("Enter the number: ") ;
    scanf("%d", &a) ;
    while(a!=0)
    {       
         rem= a%10 ;
       sum= sum*10 + rem ;
       a=a/10 ;
    }
    
    printf("The reversed no is %d", sum) ;

    return 0 ;

}