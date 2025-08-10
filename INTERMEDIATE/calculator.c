#include<stdio.h>
int main () {
int a,b,d ;
char c ;
printf("Welcome to my basic calculator.\n") ;
printf("Enter two numbers: ") ;
scanf(" %d %d", &a, &b) ;
printf("Enter the valid operation\n you wish to perform\n(+-/*): \n ") ;
scanf(" %c", &c) ; 
switch(c) {
    case '+' :
     d = (a + b) ;
     printf("The sum of two numbers is %d", d) ;
     break ;

case '-':
     d = (a - b) ;
     printf("The difference of two numbers is %d", d) ;
     break ;
     case '*' :
     d = (a * b) ;
     printf("The product of two numbers is %d", d) ; 
     break ;
     case '/' :
     d = (a / b) ;
     printf("The quotient is %d", d) ;
     break ;
     default : printf("Invalid input.") ;
     break ;
}
    return 0 ;
}