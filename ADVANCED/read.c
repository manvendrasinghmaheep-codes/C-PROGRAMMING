#include<stdio.h>
int main ()
{
    char ch ;
    printf("Enter a character: ") ;
    scanf("%c", &ch) ;
    char *i = &ch ;
    printf("You have entered %c", *(i)) ;

    return 0 ;
}