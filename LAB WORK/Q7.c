#include<stdio.h>
int main ()
{
   int service ;
   char ch1, ch2 ;

    printf("Enter your gender(m/f): \n") ;
   scanf(" %c", &ch1) ;
    printf("Are you post graduate(y/n): \n") ;
   scanf(" %c", &ch2) ;
 printf("Enter your years of service: \n") ;
   scanf(" %d", &service) ;

   if(ch1==109 || ch1==77)
   {
    if(ch2==121 || ch2==89)
    {
        if(service>=10)
        {
            printf("Your salary is 15000") ;
        }
        else
        {
           printf("Your salary is 10000") ;
        }
    }
    else 
    {
        if(service>=10)
        {
            printf("Your salary is 10000") ;
        }
        else
        {
           printf("Your salary is 7000") ;
        }
    }
   }
   else
   {
    if(ch2==121 || ch2==89)
    {
        if(service>=10)
        {
            printf("Your salary is 12000") ;
        }
        else
        {
           printf("Your salary is 10000") ;
        }
    }
    else 
    {
        if(service>=10)
        {
            printf("Your salary is 9000") ;
        }
        else
        {
           printf("Your salary is 6000") ;
        }
    }
   }
    return 0 ;
}