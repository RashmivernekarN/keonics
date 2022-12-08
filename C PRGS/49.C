/*prg to  read  num & find the sum of all digits using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int temp,n,d,sum=0;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     temp=n;
     while(n>0)
      {
       d=n%10;
       sum=sum+d;
       n=n/10;
      }
     printf("\n Given num=%d ",temp);
     printf("\n sum of digits=%d",sum);
     getch();
  }

