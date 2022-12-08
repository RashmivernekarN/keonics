/*prg to print nums 1 to N even nums using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=2,n;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     printf("\n Even nums area:\n");
     while(i<=n)
      {
       printf("\t %d",i);
       i=i+2;
      }
     getch();
  }
