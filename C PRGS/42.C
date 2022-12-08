/*prg to print  1 to N nums which are div by 5 using while loop*/

#include<stdio.h>
#include<conio.h>
 void main()
  {
     int i=1,n;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     printf("\n 1 to N nums divisable by 5 area:\n");
     while(i<=n)
      {
       if(i%5==0)
       {
       printf("\n %d",i);
       }
       i++;
      }
     getch();
  }
