/*//program to calculating Electricity bill.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int mn,pr,psr,cu;
float ru,bill;
char name;
printf("\nEnter Name of Owner:");
scanf("%s",&name);
printf("\nEnter The Meter Number:");
scanf("%d",&mn);
printf("\n Present reading:");
scanf("%d",&pr);
printf("\n Past reading:");
scanf("%d",&psr);
printf("\n Enter The Rate of Unit:");
scanf("%f",&ru);
cu=pr-psr;
bill=cu*ru;
printf("\n Consumed Unit:=%d",cu);
printf("\n Bill Amount:=%0.2f",bill);
getch();
} */
//program to Demonstrate Invoice details.
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int barcode,qty,dis;
float rate,amount,aad,cgst,sgst,igst,snet,inet,comm;
char pro[25],remarks[20];
printf("\nEnter Barcode:");
scanf("%d",&barcode);
printf("\nEnter The product Name:");
scanf("%s",&pro);
printf("\n Enter The Quantity:");
scanf("%d",&qty);
printf("\n Rate of Product:");
scanf("%f",&rate);
{
amount=qty*rate;
dis=amount*12/100;
aad=amount-dis;
cgst=amount*9/100;
sgst=amount*9/100;
igst=amount*18/100;
snet=aad+sgst+cgst;
inet=aad+igst;
comm=inet*5/100;
}
printf("\n*****************Product details******************");
printf("\n Barcode:=%d",barcode);
printf("\n Name of The product:=%s",pro);
printf("\n Number of Quantity:=%d",qty);
printf("\n Rate of Item:=%0.2f",rate);
printf("\n Total Amount:=%f",amount);
printf("\n Discount Earned:=%0.2f",dis);
printf("\n Amount After Discount:=%0.2f",aad);
printf("\n Central goods Service Tax:=%0.2f",cgst);
printf("\n State goods Service Tax:=%0.2f",sgst);
printf("\n Integrated goods Service Tax:=%0.2f",igst);
printf("\n State Net Amount:=%0.2f",snet);
printf("\n Inter State Net Amount:=%0.2f",inet);
printf("\n Commission:=%0.2f",comm);
{
printf("\n Remarks:=%s",remarks);
if(comm>=10000)
printf("Outsatding");
else if(comm<10000 && comm>=5000)
printf("Excellent");
else if(comm<5000 && comm>=1000)
printf("Good");
else if(comm<1000 && comm>=500)
printf("poor");
else
printf("Bad");
}
getch();
}
