/*prg to read a num and print its equivalent month name*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int ch;
   clrscr();
   printf("\n Enter any number");
   scanf("%d",&ch);
   if(ch==1)
      printf("\n Jan");
    else if(ch==2)
      printf("\n Feb");
    else if(ch==3)
      printf("\n Mar");

    else if(ch==12)
      printf("\n Dec");

   else
      printf("\n Invalid month no");

   getch();
 }