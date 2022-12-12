//program to calculate simple interest.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int p,t;
float r,si;
printf("\n\nEnter The value of Principale Amount:");
scanf("%d",&p);
printf("\nEnter The Time:");
scanf("%d",&t);
printf("\nEnter The Rate of Interest:");
scanf("%f",&r);
{
si=p*(t*r)/100;
}
printf("\n\n\nSimple Interest=%0.2f",si);
getch();
}












