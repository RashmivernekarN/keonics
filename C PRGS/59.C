/*prg to reverse a given num using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int n,temp,d,r=0;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     temp=n;
     do
      {
      d=n%10;
      r=(r*10)+d;
      n=n/10;
      } while(n>0);
     printf("\n Given nums=%d",temp);
     printf("\n Reversed num=%d",r);
     getch();
  }