//prg to read N array elements and find the biggest element
#include<stdio.h>
#include<conio.h>
int main()
  {
    int a[5],i,big,n;
    clrscr();
    printf("\n Enter the limit");
    scanf("%d",&n);
    printf("\n Enter the elements");
    for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
  //find big
   big=a[0];
    for(i=1;i<n;i++)
     {
      if(a[i]>big)
	big=a[i];
     }
    printf("\n Biggest element=%d",big);

    getch();
 }