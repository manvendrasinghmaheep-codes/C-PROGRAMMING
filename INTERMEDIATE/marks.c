#include<stdio.h>
int main () {
    int grades ;

printf("Enter your grades(0-100): \n") ;
scanf(" %d", &grades) ;
if(grades>=90 && 100>=grades) {
    printf("Excellent.") ;
}
else if(grades>=75 && 89>=grades) {
    printf("Very good.") ;
}
else if(grades>=60 && 31>=grades) {
    printf("Good") ;
}
else if(grades>30 && 59>=grades) {
    printf("Just pass.") ;
}
else if(grades>=0 && 29>=grades ) {
    printf("Failed.") ;
    
}
else {
    printf("Invalid input.") ;
}
    return 0 ;
}