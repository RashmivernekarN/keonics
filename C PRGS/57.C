/*prg to  find sum of 1 to N nums using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,sum=0,n;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     do
      {
       sum=sum+i;
       i=i+1;
      } while(i<=n);
     printf("\n sum 1 to N nums=%d",sum);
     getch();
  }