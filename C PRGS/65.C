/* prg to find sum of 1 to n nums using for loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i,n,sum=0;
     clrscr();

     printf("\n Enter any num");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
       {
	 sum=sum+i;
       }
     printf("\n sum=%d",sum);
       getch();
   }
