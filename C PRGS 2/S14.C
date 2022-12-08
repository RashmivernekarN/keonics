/*prg to read a string & count no of alphabet , digit and special char
using ASCII*/
#include <stdio.h>
#include<conio.h>
void main()
  {
   int i,a=0,s=0,d=0;
   char str1[20],str2[20];
   clrscr();
   printf("\nEnter 1st string");
   gets(str1);
   printf("\n First  string is %s",str1);
   for(i=0;str1[i]!='\0';i++)
    {
     if(str1[i]>=65 && str1[i]<=90||str1[i]>=97 && str1[i]<=122)
       {
       a++;
       }
     else if(str1[i]>=48 && str1[i]<=57)
       {
       d++;
       }
     else
       {
	 s++;
       }
     }

     printf("\n alphabets=%d",a);
     printf("\n digits=%d",d);
     printf("\n specail characters=%d",s);
   getch();
  }