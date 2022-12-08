/*prg to demonstrate structure variable*/
#include <stdio.h>
#include <conio.h>
struct school
{
 int roll;
 char name[25];
 char address[25];
 int weight;
};
 void main()
{
 int i;
 struct school stu[3];
 clrscr();
 for (i=0;i<3;i++)
{
 printf ("\n enter the roll number");
 scanf ("%d",&stu[i].roll);

 printf ("\n enter name");
 scanf ("%s",stu[i].name);

 printf ("\n enter the address");
 scanf ("%s",stu[i].address);

 printf ("\n enter weight in kg");
 scanf ("%d",&stu[i].weight);
}
 for (i=0;i<3;i++)
{
 printf ("\n Details of student no %d",i+1);
 printf ("\n the student detial are");
 printf ("\n roll number %d",stu[i].roll);
 printf ("\n name %s",stu[i].name);
 printf ("\n address %s",stu[i].address);
 printf ("\n weight %d in kg",stu[i].weight);
}
getch();
}