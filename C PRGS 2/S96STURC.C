/*prg to read name,address and weightg of N student and
displaying them using structure variable*/
#include <stdio.h>
#include <conio.h>
#define max 100
struct school
{
 int roll;
 float weight;
 char name[25];
 char address[25];
} stud[max];
 void main()
{
 int i,n;
 clrscr();
 printf ("\n how many student?");
 scanf ("%d",&n);
 for (i=0;i<n;i++)
{
 printf ("\n enter the roll number");
 scanf ("%d",&stud.roll);
 printf ("\n enter name");
 scanf ("%s",stud.name);
 printf ("\n enter address");
 scanf ("%s",stud.address);
 printf ("\n enter weight");
 scanf ("%f",&stud.weight);
}
 printf ("\n the student detail are:");
 printf ("\n roll number\t name\t address\t weight");
 for (i=0;i<n;i++)
{
 printf ("\n roll number %d",stud.roll);
 printf ("\n name %s",stud.name);
 printf ("\n address %s",stud.address);
 printf ("\n weight in kg %f",stud.weight);
}
getch();
}
