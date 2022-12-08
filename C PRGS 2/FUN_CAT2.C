//illustrate function without return value and without argument
#include<stdio.h>
#include<conio.h>
int a,b,sum;//global variable declaration
void addition();

void main()
{
    clrscr();
    addition();
    getch();
}
void addition()
{
   printf("\n\tenter 2 integers");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("\n\tsum=%d",sum);
}