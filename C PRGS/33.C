/*prg to read a num and print its equivalent month name using switch*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int ch;
   clrscr();
   printf("\n Enter any number");
   scanf("%d",&ch);
   switch(ch)
   {
   case 1:
      printf("\n Jan");
      break;
   case 2:
      printf("\n Feb");
      break;
   case 3:
      printf("\n Mar");
      break;
   case 11:
      printf("\n Nov");
      break;
   case 12:
      printf("\n Dec");
      break;
   default:
      printf("\n Invalid month no");
   }
   getch();
 }