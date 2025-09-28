#include<stdio.h>
int main () 
{
    int a,b,sum=0,i ;
    printf("Enter two numbers: ") ;
    scanf("%d %d", &a, &b) ;
    if(a>b)  
    {
    for(int i = a ; i<=(a*b); i++) {          //LCM CALCULATOR
    if(i%a==0 && i%b==0) 
    {
        printf("The LCM IS %d", i) ;
        break ;
    }
    }
}
else
{
    for(int i = b ; i<=(a*b); i++) {
    if(i%a==0 && i%b==0) 
    {
        printf("The LCM IS %d", i) ;
        break ;
    }
    }
}
    return 0 ;

}