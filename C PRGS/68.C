/*prg to print 1 to N fibonacci nums using for loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     long int i,n,f1=-1,f2=1,f3;
     clrscr();
     printf("\n Enter any num");
     scanf("%ld",&n);
     for(i=1;i<=n;i++)
       {
	 f3=f1+f2;
	 printf("\t %ld",f3);
	 f1=f2;
	 f2=f3;
       }

     getch();
 }