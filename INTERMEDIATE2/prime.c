#include<stdio.h>
int main () 
{
    int a,i,count=0;
    printf("Enter the number: ") ;
    scanf("%d", &a) ;
    for(i= a; i>=1; i--) 
    {
        if(a%i==0) 
        {
        count= count+1 ;                        //PRIME CHECKER
        }
    }
        if(count==2)
        {
            printf("%d is a prime number.", a) ;
        }
        else
        {
            printf("%d is not a prime number.", a) ;
        }
    return 0 ;

}