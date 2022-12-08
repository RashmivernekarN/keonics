 //prg to copy the elements of one array to another
 #include<stdio.h>
 #include<conio.h>
 void main()
   {
     int n,a[20],b[20],i;
     clrscr();
     printf("\n Enter the limit");
     scanf("%d",&n);
     printf("\n Enter the elements of array A");
     for(i=0;i<n;i++)
       {
	scanf("%d",&a[i]);

       }
     printf("\n Entered elements of array A\n");
     for(i=0;i<n;i++)
       {
	printf("%d\t",a[i]);

       }
      for(i=0;i<n;i++)
       {
	b[i]=a[i];

       }
     printf("\n The copied elements of array B\n");
     for(i=0;i<n;i++)
       {
	printf("%d\t",b[i]);

       }

     getch();
   }
