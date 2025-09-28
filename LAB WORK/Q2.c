#include<stdio.h>
#include<math.h>
#include<stdlib.h> 

int main () 
{
    int a = 2 ;
    int b = 3 ;
    int c = 5 ;
    int exp2,exp3 ;
    float exp1 ; 

    exp1 = 2 * a * log10((4*pow(a,2))/b) + abs(pow(b,2)-pow(c,2)) - 5*sqrt(c) + cos(3.14/6) ;

exp2 = ((a || (!b)) && (a||c)) || (a && b && c) || (b && c) ;
exp3 = ((a | (~b)) & (a|c)) | (a & b & c) | (b & c) ;

 printf("%f\n", exp1) ;
   printf("%d\n", exp2) ; 
    printf("%d\n", exp3) ; 

    return 0 ;
    
}