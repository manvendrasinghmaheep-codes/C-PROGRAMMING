#include<stdio.h>
int main () {
    int age ;

printf("Enter your age: \n") ;
scanf(" %d", &age) ;
if(age>0 && age<13) {
    printf("You are a child.") ;
}
else if(age>13 && age<18) {
    printf("You are a teenager.") ;
}
else if(age>18 && age<60) {
    printf("You are an adult.") ;
}

else if(age>=60 ) {
    printf("You are a senior.") ;
    
}
else {
    printf("Invalid input.") ;
}
return 0 ;
}