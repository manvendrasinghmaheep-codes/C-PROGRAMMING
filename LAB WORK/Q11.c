#include<stdio.h>
int main ()
{
    int quantity,food ;
    printf("Enter the food you wish to be served(1,2,3,4):\n") ;
    printf("1. Burger(@85)\n2. Pizza(@125)\n3. Sandwich(@60)\n4. Lassi(@40) \n") ;
    scanf("%d", &food) ;
    printf("Enter the quantity: \n") ;
    scanf("%d", &quantity) ;
    switch(food)
    {
        case 1:
        printf("Your total payable bill is %d", quantity*85) ;
        break ;
        case 2:
        printf("Your total payable bill is %d", quantity*125) ;
        break ;
        case 3:
        printf("Your total payable bill is %d", quantity*60) ;
        break ;
        case 4:
        printf("Your total payable bill is %d", quantity*40) ;
        break ;
    }

    return 0 ;
}