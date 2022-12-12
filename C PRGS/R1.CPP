/*//program to calculate arithmetic operations..
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,total,diff,mul,div;
float per;
printf("\n Enter the value of A:");
scanf("\n%d",&a);
printf("\n Enter the value of B:");
scanf("\n%d",&b);
total=a+b;
diff=a-b;
mul=a*b;
div=a/b;
per=total/2;
printf("\n***********Calculating Arithmetic Operations********");
printf("\n\n          Total Of A and B:=%d",total);
printf("\n\nDifference between A and B:=%d",diff);
printf("\n\n Multiplication of A and B:=%d",mul);
printf("\n\n       Division of A and B:=%d",div);
printf("\n\nPercentage of toatal value:=%0.2f\n",per);
printf("\n****************************************************");
getch();
} */
/*//program to print area and perimeter of square..
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a=5;
float area,peri;
area=a*a;
peri=a*4;
printf("\nArea of Square:=%f",area);
printf("\nPerimeter of Square:=%f",peri);
getch();
} */


//program to print area and perimeter of circle..
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
float r,area,peri;
printf("\nEnter The value of Radies:");
scanf("%f",&r);
area=r*r;
peri=0.	5*r*r;
printf("\n      Area of Circle:=%f",area);
printf("\nPerimeter of Circle :=%f",peri);
getch();
}

/*//program to print area and perimeter of rectangle..
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int l=5,w=10;
float area,peri;
area=l*w;
peri=2*(l+w);
printf("\nArea of Square:=%f",area);
printf("\nPerimeter of Square:=%f",peri);
getch();
} */