//illustration of function without return value with argument
#include<stdio.h>
#include<conio.h>

void addition(int a,int b);//function declaration

void main()
{
  int x,y;
  clrscr();
  printf("\n\tenter any 2 integers");
  scanf("%d%d",&x,&y);
  addition(x,y);//calling function -> x and y are actual parameters
  getch();
 }
 void addition(int a,int b) //called function -> a and b are formal parameters
 {
   printf("\n\tsum=%d",a+b);
 }

