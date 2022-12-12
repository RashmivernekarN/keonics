//program to Demonstrate Employee salary slip.
#include<stdio.h>
#include<conio.h>
void main()
{
int eid;
float basic,hra,da,gross,pf,esi,tax,lic,ded,net;
char name[25],desi[20],grade;
clrscr();
printf("\nEnter the Employee ID:");
scanf("%d",&eid);
printf("\nEnter the Employee Name:");
scanf("%s",&name);
printf("\nEnter the Employee Designation:");
scanf("%s",&desi);
printf("\nEnter the Employee Basic Salary:");
scanf("%f",&basic);
{
hra=basic*32/100;
da=basic*16/100;
gross=basic+hra+da;
pf=basic*12/100;
esi=basic*1.75/100;
tax=basic*18/100;
lic=500;
ded=pf+esi+tax+lic;
net=gross-ded;
}
printf("\nEmployee Identity Number:=%d",eid);
printf("\nEmployee Name:=%s",name);
printf("\nEmployee Designation:=%s",desi);
printf("\nEmployee Basic Salary:=%0.2f",basic);
printf("\nEmployee House Rent Allowns:=%f",hra);
printf("\nEmployee Dearness Allowns:=%f",da);
printf("\nEmployee Gross Salary:=%f",gross);
printf("\nEmployee Providend Fund:=%f",pf);
printf("\nEmployee Service Helth Insurance:=%f",esi);
printf("\nEmployee Life Insurance:=%f",lic);
printf("\nEmployee Tax:=%f",tax);
printf("\nEmployee Deduction:=%f",ded);
printf("\nEmployee Net Salary:=%f",net);
printf("\nEmployee Grade:=%s",grade);
{
if(net>=25000)
printf("A");
else if(net<25000 && net>=15000)
printf("B");
else if(net<15000 && net>=10000)
printf("C");
else
printf("D");
}
getch();
}





