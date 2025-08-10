#include<stdio.h>
int main () {
int a,reverse,check ;
printf("Enter a number: ") ;
scanf(" %d", &a) ;
reverse = (a * (-1)) ;
check = (a<0) ? (printf("The absolute value is %d", reverse)) : (printf("The absolute value is %d", a)) ; 

    return 0 ;
}