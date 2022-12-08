/*prg to print nums 1 to N nums using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,n;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     while(i<=n)
      {
       printf("\t %d",i);
       i++;
      }
     getch();
  }
