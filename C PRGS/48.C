/*prg to  read  num & check whether given nums is a an asmtrong no
or not  using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int temp,n,d,am=0;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     temp=n;
     while(n>0)
      {
       d=n%10;
       am=am+(d*d*d);
       n=n/10;
      }
      if(temp==am)
	  printf("\n Given num=%d is a an amstrong num",temp);
      else
	  printf("\n Given num=%d is not an amstrong num",temp);
     getch();
  }
