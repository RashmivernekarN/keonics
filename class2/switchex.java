//arithmetic operation using switch
class switchex
{
	public static void main(String args[ ])
	 {
	    int a,b,sum,diff,p,q,r;
	    char ch;
	    ch='-';
	    a=10;
	    b=2;
	    switch(ch)
	    {
	     case '+':sum=a+b;
	             System.out.println("sum="+sum);
	             break;
	     case '-':diff=a-b;
	             System.out.println("difference="+diff);
	             break;
	     case '*':p=a*b;
	             System.out.println("product="+p);
	             break;
	     case '/':q=a/b;
	             System.out.println("que="+q);
	             break;
	     case '%':r=a%b;
	             System.out.println("rem="+r);
	             break;
	      default:System.out.print("enter valid choice");
	              break;     
	    }

	 }
}