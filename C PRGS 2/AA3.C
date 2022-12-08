//prg to read N array elements and find the sum of all nums
#include<stdio.h>
#include<conio.h>
void  main()
  {
    int a[50],i,sum=0,n;
    clrscr();
    printf("\n Enter the size of array");
    scanf("%d",&n);
    printf("\n Enter %d elements",n);
    for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
  //compute sum
    for(i=0;i<n;i++)
     {
       sum=sum+a[i];
     }
    printf("\n sum of all elements=%d",sum);
    getch();
 }