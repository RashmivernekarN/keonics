//prg to read N array elements and find the sum of odd and even nums
#include<stdio.h>
#include<conio.h>
int main()
  {
    int a[5],i,sume=0,sumo=0,n;
    clrscr();
    printf("\n Enter the limit");
    scanf("%d",&n);
    printf("\n Enter the elements");
    for(i=0;i<n;i++)
     {
       scanf("%d",&a[i]);
     }
  //compute sum
    for(i=0;i<n;i++)
     {
      if(a[i]%2==0)
       sume=sume+a[i];
      else
       sumo=sumo+a[i];
     }
    printf("\n sum of even elements=%d",sume);
    printf("\n sum of odd elements=%d",sumo);
    getch();
 }