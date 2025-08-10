#include<stdio.h>
int main () {
int num ;
printf("Enter a number: ") ;
scanf(" %d", &num) ;
if(num<0) {
    printf("The given number is negative.") ;
}
else if(num=0) {
    printf("The given number is zero.") ;
}
else {
    printf("The given is positive.") ;
}
    return 0 ;
}