/*prg to  find sum of 1 to N even and odd nums using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,se=0,so=0,n;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     do
      {
       if(i%2==0)
	{
	se=se+i;
	}
       else
	{
	so=so+i;
	}
       i=i+1;
      } while(i<=n);
     printf("\n sum 1 to N even nums=%d",se);
     printf("\n sum 1 to N odd nums=%d",so);
     getch();
  }