/*prg to read a string & convert uppercase to lowercase and vice versa
*/
#include <stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void main()
  {
   int i;
   char str1[20],str2[20];
   clrscr();
   printf("\nEnter 1st string");
   gets(str1);
   printf("\n First  string is %s",str1);
   for(i=0;str1[i]!='\0';i++)
    {
     if(isupper(str1[i]))
       {
	 str2[i]=tolower(str1[i]);
       }
     else if(islower(str1[i]))
       {
	 str2[i]=toupper(str1[i]);
       }
     else
       {
	 str2[i]=str1[i];
       }


     }
       str2[i]='\0';
     printf("\n Converted  string =%s",str2);
   getch();
  }