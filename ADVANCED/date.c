#include<stdio.h>

void date() ;
int day ,month, year ;

int main () 
{
   printf("Enter current day month and year: \n") ;
   scanf("%d %d %d", &day, &month, &year) ;
   date() ;

    return 0 ;
}
void date ()
{
   printf("TODAY IS %d-%d-%d", day, month, year) ;
}