 /*prg to read N nos and a search key and find
 whether the search key is present in an array or not*/
 #include<stdio.h>
 #include<conio.h>
 void main()
  {
   int a[20],i,n,f=0,key;
   clrscr();
   printf("\n Enter any N nos");
   scanf("%d",&n);
   printf("\n Enter elements");
   for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
   printf("\n Enter a search key");
   scanf("%d",&key);

   for(i=0;i<n;i++)
    {
     if(a[i]==key)
       {
	f=1;
	break;
       }
    }
   if(f>0)
     printf("\n Search key is present at location: %d",i+1);
   else
     printf("\n Search key is not found");
   getch();
  }