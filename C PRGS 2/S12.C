/*prg to read a string & count no of alphabet , digit and special char
using funtions*/
#include <stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
  {
   int i,a=0,s=0,d=0;
   char str1[20],str2[20];
   clrscr();
   printf("\nEnter any string");
   gets(str1);
   printf("\n First  string is %s",str1);
   for(i=0;str1[i]!='\0';i++)
    {
     if(isalpha(str1[i]))
       {
       a++;
       }
     else if(isdigit(str1[i]))
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