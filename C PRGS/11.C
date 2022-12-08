
/*prg to demonstrate increment operator*/
#include<stdio.h>
#include<conio.h>
void main()
 {
   int i=10,j=20;
   clrscr();
   printf("\n Before incrementing i=%d \t j=%d",i,j);
   printf("\n After incrementing i=%d",++i);
   printf("\n j=%d ",j++);
   printf("\n updated j value=%d",j);
      getch();
 }