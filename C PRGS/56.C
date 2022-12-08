/*prg to  find factorial of a given num using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,fact=1,n;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     do
      {
       fact=fact*i;
       i=i+1;
      } while(i<=n);
     printf("\n Factorial of a given num=%d",fact);
     getch();
  }