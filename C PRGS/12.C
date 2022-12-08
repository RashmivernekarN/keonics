/*prg to demonstrate decrement operator*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int i=10,j=20;
   clrscr();
   printf("\n Before decrementing i=%d \t j=%d",i,j);
   printf("\n After decrementing i=%d",i--);
   printf("\n updated i value=%d",i);
   printf("\n j=%d",--j);
   getch();
 }