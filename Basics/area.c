#include<stdio.h>

int main () {
    int num,square ;
    printf("Enter the side: ") ;
    scanf(" %d", &num) ;
    square = num * num ;
    printf("Area of square with given side is %d", square) ;

    return 0 ;
}