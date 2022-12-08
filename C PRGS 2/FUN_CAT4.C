//illustration of function with return value with argument
#include<stdio.h>
#include<conio.h>

int addition(int a,int b);//function declaration
void main()
{
  int x,y;
  clrscr();
  printf("\n\tenter any 2 integers");
  scanf("%d%d",&x,&y);
  printf("\n\tsum=%d",addition(x,y));
    getch();
 }
 int addition(int a,int b)
 {
   return(a+b);
 }

