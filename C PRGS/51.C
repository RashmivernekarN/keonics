/*prg to  print 1 to 5  using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1;
     clrscr();
     printf("\n 1 to 5 nums are:\n");
     do
      {
       printf("\n %d",i);
       i=i+1;
      } while(i<=5);

     getch();
  }