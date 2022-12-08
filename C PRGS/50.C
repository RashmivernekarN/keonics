/*prg to  print first 10 fibonacci series using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int f1=-1,f2=1,f3,i=1;
     clrscr();
     printf("\n first 10 fibonacci nums");
     while(i<=10)
      {
       f3=f1+f2;
       printf("\n %d",f3);
       i++;
       f1=f2;
       f2=f3;
      }

     getch();
  }