#include<stdio.h>
#include<math.h>
int main () {
float prin,rate,time,ci ;
printf("Welcome to Compound Interest calculator\n") ;
printf("Enter your principle rate and time: ") ;
scanf(" %f %f %f", &prin, &rate, &time) ;
ci = prin * pow((1 + rate/100.0),time) ;
printf("The compound interest is %f", ci) ;


    return 0 ;

}