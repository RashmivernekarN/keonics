  /*prg to read a string and convert uppercase string to lowercase and
  vice-versa*/
  #include<stdio.h>
  #include<conio.h>
  #include<ctype.h>
  void main()
    {
     int i;
     char str1[20],str2[20];
     clrscr();
     printf("\n Enter any string");
     gets(str1);
     for(i=0;str1[i]!='\0';i++)
      {
       if(str1[i]>='A' && str1[i]<='Z')
	{
	  str2[i]=tolower(str1[i]);
	}
       else if(str1[i]>='a' && str1[i]<='z')
	{
	  str2[i]=toupper(str1[i]);
	}
       else
	{
	  str2[i]=str1[i];
	}
      }
     str2[i]!='\0';
    printf("\n Given string is %s",str1);
    printf("\n Converted string is %s",str2);
     getch();
    }