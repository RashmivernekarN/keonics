 //program to illustrate structure

#include<stdio.h>
#include<conio.h>

struct student
  {
    int roll_no;
    char name[20];
    char result[20];
  };

  void main()
  {
      struct student s1;
      clrscr();
      printf("\n\tenter student roll_ no");
      scanf("%d",&s1.roll_no);
      printf("\n\tenter student name");
      scanf("%s",s1.name);
      printf("\n\tenter student result");
      scanf("%s",s1.result);
      printf("\n\tROLL NO=%d\n\t NAME=%s \n\tRESULT=%s",s1.roll_no,s1.name,s1.result);
      getch();
}