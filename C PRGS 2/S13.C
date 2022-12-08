

/*prg to read a string & count no of alphabet , digit and special char
*/
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
     if(str1[i]>='A' && str1[i]<='Z'||str1[i]>='a' && str1[i]<='z')
       {
       a++;
       }
     else if(str1[i]>='0'&& str1[i]<='9')
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