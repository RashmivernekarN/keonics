  /*prg to read a string and count no of alphabets,digits n special characters
   using built in function*/
  #include<stdio.h>
  #include<conio.h>
  #include<ctype.h>
  void main()
    {
     int i,a=0,d=0,s=0;
     char str1[20];
     clrscr();
     printf("\n Enter any string");
     gets(str1);
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
    printf("\n Given string is %s",str1);
    printf("\n Alphabets =%d",a);
    printf("\n digits =%d",d);
    printf("\n special characters =%d",s);
     getch();
    }