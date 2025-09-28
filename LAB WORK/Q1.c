#include<stdio.h>
int main () 
{
 int a = 8 ;
 int b = 29 ;
 int sum2,qot,rem,pro1 ;
 float c = 15.35 ;
 float d = 7.254 ;
 float sum1,avg1,avg2,pro ; 

 sum1 = a+b+c+d ;
 avg1 = sum1/4.0 ;
 sum2 = a+b+c+d ;
 avg2 = sum2/4.0 ;
 pro = c*d ;
 qot = b/a ;
 rem = b%a ;
 pro1 = a*b ;

printf("%f  %F\n", sum1, avg1) ;
printf("%d %f\n", sum2, avg2) ;
printf("%f\n", pro) ;
printf("%d %d\n", qot, rem) ;
printf("%o\n", pro1) ;
printf("%X\n", pro1) ;

return 0 ;

}