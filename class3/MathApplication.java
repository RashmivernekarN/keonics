//program to illustrate static members

class Mathoperation
{
   static double mul(double x,double y)
    {
       return(x*y);
    }
    static double divide(double x,double y)
    {
      return(x/y);
    }
}

class MathApplication
{
   public static void main(String args[])
    {
      double a=Mathoperation.mul(4.0,5.0);
      double b=Mathoperation.divide(a,2.0);
      System.out.println("b="+b);
    }
}  
