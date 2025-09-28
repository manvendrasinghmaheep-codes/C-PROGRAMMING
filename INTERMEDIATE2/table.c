#include<stdio.h> 
int main () 
{ 
    int a,i=1,product ;
    printf("Enter the number: ") ;
    scanf("%d", &a) ;

    while(i!=11) {
        printf("%d x %d = %d\n", a, i, i*a) ;
        i = i+1 ;
    }

    return 0 ;
}