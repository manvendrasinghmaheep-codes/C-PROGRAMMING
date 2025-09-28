#include<stdio.h>
int main () 
{
    int n,a=0,b=1,i,c ;
    printf("Enter the number: ") ;
    scanf("%d", &n) ;
    for(i=1 ; i<=n ; i++) 
    {
        c= a+b ;
        b=c ;
        a=b ;
    }
    printf("The nth term is %d", c) ;

    
    return 0 ;

}