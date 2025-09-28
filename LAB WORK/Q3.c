#include<stdio.h>
int main () 
{
    int km,m,cm ;
    float inch,feet ;

    printf("Enter the distance in km: \n") ;
    scanf("%d", &km) ;

    m = km*1000 ;
    cm = m*100 ;
    feet = 3.3 * m ;
    inch = 12.0 * feet ;

    printf("Distance in m is %d\n", m) ;
    printf("Distance in cm is %d\n", cm) ;
    printf("Distance in feet is %f\n", feet) ;
    printf("Distance in inch is %f", inch) ;

    return 0 ;
    
}