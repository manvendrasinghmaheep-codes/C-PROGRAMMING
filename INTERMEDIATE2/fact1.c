#include<stdio.h>
int main () 
{
    int a ;
    float fact=1 ;
    printf("Enter a number: \n") ;
    scanf("%d", &a) ;
    for(int i = 1 ; i<=a ; i++)          //FACTORIAL CALCULATOR
    {
        fact = fact*i ;
    }
     printf("The factorial of given no is %f", fact) ;

    return 0 ;

}