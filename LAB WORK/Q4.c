#include<stdio.h>
int main () 
{
 int monitor,cpu,oth ;
 float units,bill ;

 printf("Enter the electricity consumption of monitor,cpu and others: \n") ;
 scanf("%d %d %d", &monitor, &cpu, &oth) ;

 units = ((monitor+cpu+oth)*30*6)/1000.0 ;
 bill = units*8.0 ;

printf("Total units consumed: %f\n", units) ;
 printf("Your total payable bill is: %f", bill) ;

    return 0 ;
    
}