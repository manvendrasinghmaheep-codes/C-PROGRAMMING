#include<stdio.h>
int main () {

    int fah ;
    float cel ;
    printf("Enter the fahrenheit: ") ;
    scanf(" %d", &fah) ;
    cel = (fah-32) * (5.0/9.0) ;
    printf("\nThe celcius equivalent of given fahrenheit is %f", cel) ;

    return 0 ;

}