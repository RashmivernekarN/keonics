/*//program to find even and odd no's.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,even,odd;
clrscr();
printf("\nEnter The Value of A:");
scanf("%d",&a);
if(a%2==0)
printf("\n%d is Even Number",a);
if(a%2!=0)
printf("\n%d is Odd Number",a);
getch();
} */

/*//program to find +ve and -ve no's.
#include<stdio.h>
#include<conio.h>
void main()
{
int a,even,odd;
clrscr();
printf("\nEnter The Value of A:");
scanf("%d",&a);
if(a>0)
printf("\n%d is Positive +ve",a);
if(a<0)
printf("\n%d is Nagative -ve",a);
getch();
} */

//program to find Result.
#include<stdio.h>
#include<conio.h>
void main()
{
int marks,pass,fail;
clrscr();
printf("\nEnter The Value of Marks:");
scanf("%d",&marks);
if(marks>=35)
printf("\n Pass");
if(marks<35)
printf("\nFail");
getch();
}