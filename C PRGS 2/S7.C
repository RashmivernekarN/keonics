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
       switch(str1[i])
	{
	   case 'A':
	   case 'E':
	   case 'I':
	   case 'O':
	   case 'U':
	   case 'a':
	   case 'e':
	   case 'i':
	   case 'o':
	   case 'u': v++;
		     break;

	}
      }
    printf("\n Given string is %s",str1);
    printf("\n No of vowels =%d",v);

     getch();
    }