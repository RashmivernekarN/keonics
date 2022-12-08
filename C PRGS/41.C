/*prg to print nums 1 to N odd nums using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,n;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     printf("\n 1 to N odd nums area:\n");
     while(i<=n)
      {
       printf("\n %d",i);
       i=i+2;
      }
     getch();
  }

