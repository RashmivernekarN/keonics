/*prg to perform basic arithmetic operations*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   float a,b,sum,sub,prod,div;
   clrscr();
   printf("\n Enter two nums");
   scanf("%f%f",&a,&b);
   sum=a+b;
   sub=a-b;
   prod=a*b;
   div=a/b;
   printf("\n sum=%0.2f",sum);
   printf("\n subtraction=%f",sub);
   printf("\n product=%f",prod);
   printf("\n division=%f",div);
   getch();
 }