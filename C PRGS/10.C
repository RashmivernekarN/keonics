/*prg to find sum and average of three nums*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int a,b,c,sum;
   float avg;
   clrscr();
   printf("\n Enter three nums");
   scanf("%d%d%d",&a,&b,&c);
   sum=a+b+c;
   avg=(float)sum/3.0;//type casting
   printf("\nsum=%d",sum);
   printf("\naverage=%f",avg);
   getch();
 }