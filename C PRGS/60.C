/*prg to check whether given num is a palindrome or not
 using do while loop*/
#include<stdio.h>
#include<conio.h>
 void main()
  {
     int n,temp,d,r=0;
     clrscr();
     printf("\n Enter any num");
     scanf("%d",&n);
     temp=n;
     do
      {
      d=n%10;
      r=(r*10)+d;
      n=n/10;
      } while(n>0);
      if(temp==r)
	{ printf("\n Given nums=%d is a palindrome",temp);}
      else
	{ printf("\n Given nums=%d is not a palindrome",temp);}
     getch();
  }



