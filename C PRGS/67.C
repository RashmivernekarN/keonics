/*prg to find factorial of a given num using for loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i,n,fact=1;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
       {
	 fact=fact*i;
       }
     printf("\n factorial of a given num=%d",fact);
     getch();
   }