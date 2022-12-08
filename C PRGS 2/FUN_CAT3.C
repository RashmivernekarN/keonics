//illustration of function without argument and with return value
#include<stdio.h>
#include<conio.h>
int a,b,sum;//global variable decleration
int addition();

void main()
{
    clrscr();
   sum=addition();
   printf("\n\tsum=%d",sum);
    getch();
}
int addition()
{
   printf("\n\tenter 2 integers");
   scanf("%d%d",&a,&b);
   sum=a+b;
   return(sum);
}