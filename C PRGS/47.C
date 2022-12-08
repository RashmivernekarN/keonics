 /*prg to  read  num & check whether given nums is a palindrome
or not  using while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int temp,n,d,rev=0;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     temp=n;
     while(n>0)
      {
       d=n%10;
       rev=(rev*10)+d;
       n=n/10;
      }
      if(temp==rev)
	  printf("\n Given num=%d is a palindrome",temp);
      else
	  printf("\n Given num=%d is not a palindrome",temp);
     getch();
  }