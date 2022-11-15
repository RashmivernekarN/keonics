//smallest of 3 numbers using else if ladder
class ladder
{
	public static void main(String args[ ])
	{
	   int a=10,b=4,c=2;
	   if(a<b && a<c)
	   System.out.println(a+" is SMALL");
	   else if(b<a && b<c)
	   System.out.println(b+" is SMALL");
	   else if (c<a && c<b)
	   System.out.println(c+" is SMALL");
	   else
	   System.out.println("not possible to say which is SMALL");
	   }
 }

	  