/*prg to  print  51 to 100  nums which are div by 3and 5
using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=51;
     clrscr();
     do
      {
       if(i%3==0 && i%5==0)
       {
       printf("\n %d",i);
       }
       i=i+1;
      } while(i<=100);

     getch();
  }