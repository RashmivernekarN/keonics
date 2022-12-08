/*prg to  print  1 to 20 odd nums using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1;
     clrscr();
     printf("\n 1 to 20 odd nums are:\n");
     do
      {
       printf("\n %d",i);
       i=i+2;
      } while(i<=20);

     getch();
  }