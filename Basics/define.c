#include<stdio.h>

int main () {
char name[2][25] ;
int age;
printf("Enter your first and last name: ") ;
scanf(" %24s %24s", &name[0], &name[1]) ;
printf("Enter your age: ") ;
scanf(" %d", &age) ;
printf("Your name is %s %s and age is %d ", name[0], name[1], age) ;

    return 0 ;
}