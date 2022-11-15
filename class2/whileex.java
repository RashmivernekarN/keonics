//sum of n natural numbers using while loop
class whileex
{
	public static void main(String args[ ])
	{
	   int i,n=5,sum=0;
	   i=1;
	   System.out.println("NATURAL NUMBERS ARE");
	   while(i<=5)
	   {
	   	System.out.println(i);
	   	sum=sum+i;
	   	i++;
	   }
	   System.out.println("sum of natural numbers are="+sum);
	}
}