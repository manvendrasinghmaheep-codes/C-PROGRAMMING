#include<stdio.h>

int main () {
    const float pI = 3.1415 ;
    int num ;
    float circumference,area ;
    printf("Enter the radius of circle: ") ;
    scanf(" %d", &num) ;
    circumference = 2 * pI * num ;
    area = pI * num * num ;
    printf("\nArea of circle is %f and circumference is %f", circumference, area) ;

    return 0 ;
}