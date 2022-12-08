/*prg to demonstrate continue keyword*/
#include <stdio.h>
void main()
{
 int count,limit;
 clrscr();
 printf("\n enter the limit");
 scanf("%d",&limit);
 for (count=1;count<=limit;count++)
  {
    printf("\n %d",count);
    continue;
  }
  getch();
}
