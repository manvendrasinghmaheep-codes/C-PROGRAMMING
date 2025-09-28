#include<stdio.h>
//compares address of given two inputs
void maxmin(int *i, int *j, int **min, int **max) ;

int main ()
{
    int a,b ;
    int *min, *max ;
    printf("Enter two numbers: ") ;
    scanf("%d %d", &a, &b) ;
    int *i = &a ;
    int *j = &b ;
    maxmin(i, j, &min, &max);
    printf("The smaller address is %p and larger address is %p", (void*)min, (void*)max) ;
    printf("which is of %d and %d respectively", *(min), *(max)) ;
    return 0 ;
}
void maxmin(int *i , int *j, int **min, int **max)
{
    if(i>j)
    {
        *max = i ;
        *min = j ;
    }
    else{
        *max = j ;
        *min = i ;
    }
}