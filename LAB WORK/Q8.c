#include<stdio.h>
int main ()
{
    char ch ;
    printf("Enter a character: \n") ;
   scanf("%c", &ch) ;

   switch(ch)
   {
   case 'A'...'Z' :
printf("UPPER CASE") ;
break ;
 case 'a'...'z' :
printf("LOWER CASE") ;
break ;
case '0'...'9' :
printf("DIGIT") ;
break ;
default :
printf("SPECIAL CHARACTER") ;
}
    return 0 ;
}