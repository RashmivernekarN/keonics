/*prg to find factorial of a given num  using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,n,fact=1;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);

     while(i<=n)
      {
       fact=fact*i;
       i++;
      }
       printf("\n Factorial of a given num=%d",fact);
     getch();
  }
