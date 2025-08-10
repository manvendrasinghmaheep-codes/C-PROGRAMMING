#include<stdio.h>
int main () {
int a,check ;
printf("Enter a number: ") ;
scanf(" %d", &a) ;
check = (a%2==0) ? (printf("The given no is even."))  : (printf("The given no is odd")) ;

    return 0 ;
}