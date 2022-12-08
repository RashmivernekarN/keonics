#include <stdio.h>
#include <string.h>
struct student
{
     int id;
     char name[30];
     int percentage;
};
int main()
{
     int i;
     struct student record1 = {1, "Raju", 90};
     struct student record2 = {2, "Mani", 93};
     struct student record3 = {3, "anil", 98};
     clrscr();
     printf("Records of STUDENT1: \n");
     printf("  Id is: %d \n", record1.id);
     printf("  Name is: %s \n", record1.name);
     printf("  Percentage is: %d \n\n", record1.percentage);

     printf("Records of STUDENT2: \n");
     printf("  Id is: %d \n", record2.id);
     printf("  Name is: %s \n", record2.name);
     printf("  Percentage is: %d \n\n", record2.percentage);

     printf("Records of STUDENT3: \n");
     printf("  Id is: %d \n", record3.id);
     printf("  Name is: %s \n", record3.name);
     printf("  Percentage is: %d \n\n", record3.percentage);

     getch();
}