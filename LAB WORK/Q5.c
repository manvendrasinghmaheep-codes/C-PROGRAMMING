#include<stdio.h>
int main () 
{
   int row = 1920 ;
   int column = 1080 ;
   int bits = 24 ;
   int images ;
   int data_rate= 512 ;
   float bits_frame, time ;

   printf("Enter no of images: \n") ;
   scanf("%d", &images) ;

   bits_frame = (row*column*bits)/(1024.0*1024.0) ;
   time = (images*bits_frame*1024.0)/(data_rate) ;

   printf("Total no of bits: %f\n", bits_frame) ;
   printf("Total time required: %f", time) ;

    return 0 ;
    
}