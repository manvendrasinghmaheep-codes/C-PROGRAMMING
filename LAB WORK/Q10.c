#include<stdio.h>
int main ()
{
    int id,password ;

   printf("Enter user id and password: \n") ;
   scanf("%d %d", &id, &password) ;
   switch(id)
   {
    case 3214: 
    {
        switch(password)
        {
            case 6580:
            printf("Welcome user") ;
            break ;
            default:
            printf("Please enter correct user id and password") ;
            break ;
        }
        break ;
    }
    default:
    printf("Please enter correct user id and password") ;
    
   }
    return 0 ;
}