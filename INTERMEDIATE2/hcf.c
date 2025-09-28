#include<stdio.h>
int main () 
{
    int a,b,sum=0 ;
    printf("Enter two numbers: ") ;
    scanf("%d %d", &a, &b) ;
 if(a>b)  
    {
    for(int i = b ; i>= 1; i--) {          //HCF CALCULATOR
    if(a%i==0 && a%i==0) 
    {
        printf("The HCF IS %d", i) ;
        break ;
    }
    }
}
else
{
    for(int i = a ; i>=1; i--) {
    if(a%i==0 && b%i==0) 
    {
        printf("The HCF IS %d", i) ;
        break ;
    }
    }
}
    return 0 ;

}