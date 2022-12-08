/*prg to  print nos 5 to 1  using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=5;
     clrscr();
     printf("\n 5 to 1 nums are:\n");
     do
      {
       printf("\n %d",i);
       i=i-1;
      } while(i>=1);

     getch();
  }