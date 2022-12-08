/*prg to perform basic arithmetic operations*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   float a,b;
   clrscr();
   printf("\n Enter two nums");
   scanf("%f%f",&a,&b);
   printf("\n sum=%f",(a+b));
   printf("\n subtraction=%f",(a-b));
   printf("\n product=%f",(a*b));
   printf("\n division=%f",(a/b));
   getch();
 }