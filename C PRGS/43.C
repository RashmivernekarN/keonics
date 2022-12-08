/*prg to find sum of 1 to N nums  using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,n,sum=0;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);

     while(i<=n)
      {
       sum=sum+i;
       i++;
      }
       printf("\n sum of 1 to n nums=%d",sum);
     getch();
  }

