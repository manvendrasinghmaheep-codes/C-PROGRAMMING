#include<stdio.h>

long long factorial(int) ;

int main ()
{
    int num ;
    printf("Enter the number: ") ;
    scanf("%d", &num) ;
    factorial(num) ;
    long long result = factorial(num);
    printf("%lld", result) ;
    return 0 ;
}
long long factorial(int num) 
{
    long long result=1 ;
    for(int i = 1 ; i<=num ; i++){
    result = result*i ;
}
return result ;
}