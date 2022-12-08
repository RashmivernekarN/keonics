/*prg to  print  1 to 20 even nums using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1;
     clrscr();
     printf("\n 1 to 20 even nums are:\n");
     do
      {
       if(i%2==0)
       {
       printf("\n %d",i);
       }
       i++;
      } while(i<=20);

     getch();
  }