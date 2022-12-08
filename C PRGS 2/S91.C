/*prg to swap 2 variable*/
#include <stdio.h>
#include <conio.h>
void main()
{
int x,y,*P1,*p2,temp;
clrscr();
p1=&x;
p2=&y;
printf ("\n enter 2 value");
scanf ("%d%d",&x,&y);
temp=*p1;
*p1=*p2;
*p2=temp;
printf ("\n x=d \t y=%d",x,y);
getch();
}
