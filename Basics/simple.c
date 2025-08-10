#include<stdio.h>
int main () {
float prin,time,rate,si ;
printf("Welcome to Simple Interest calculator \n") ;
printf("Enter you prnciple rate and time: \n") ;
scanf(" %f %f %f", &prin, &time, &rate) ;
si = (prin * rate * time) / 100.0 ;
printf("The simple interest is %f", si) ;


    return 0 ;

}