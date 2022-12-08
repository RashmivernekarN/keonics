/*prg to find sum of 1 to n even and odd nums using for loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i,n,se=0,so=0;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
       {
       if(i%2==0)
	 se=se+i;
       else
	 so=so+i;
       }
     printf("\n sum of even nums=%d",se);
     printf("\n sum of odd nums=%d",so);
       getch();
   }