//factorial of given number using do while
class dowhile
{ 
public static void main(String[] args)
 {
     int i,n=5,fact=1;
     i=1;
     do
     {
     	 fact=fact*i;
     	 i++;
     }
     while(i<=n);
     System.out.println("factorial of "+n+" is "+fact);
	
}
}