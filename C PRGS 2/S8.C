  /*prg to read a string and count no of vowels in a given string*/
  #include<stdio.h>
  #include<conio.h>

  void main()
    {
     int i,v=0;
     char str1[20];
     clrscr();
     printf("\n Enter any string");
     gets(str1);
     for(i=0;str1[i]!='\0';i++)
      {
       if(str1[i]=='A'||str1[i]=='a'||str1[i]=='E'||str1[i]=='e'||str1[i]=='O'||str1[i]=='o'||str1[i]=='U'||str1[i]=='u')
	{
	 v++;
	}
      }
    printf("\n Given string is %s",str1);
    printf("\n No of vowels =%d",v);

     getch();
    }