/*prg to reverse  a given num  using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int temp,n,d,rev=0;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     temp=n;
     while(n>0)
      {
       d=n%10;
       rev=(rev*10)+d;
       n=n/10;
      }
     printf("\n Given num=%d",temp);
     printf("\n Reversed num=%d",rev);
     getch();
  }