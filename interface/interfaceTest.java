//program to illustrate interface

interface area
{
 static  final float pi=3.142f;
    float compute(float x,float y);
}
class rectangle implements area
{
    public float compute(float x,float y)
          {
              return(x*y);
          }
}
class circle implements area
{
    public float compute(float x,float y)
          {
              return(pi*x*y);
          }
}
class interfaceTest
{
     public static void main(String args[ ])
        {
                  rectangle rect=new rectangle();
                  circle cir=new circle();
                   area a1;
                   a1=rect;
   System.out.println("area of rectangle="+a1.compute(2.4f,4.5f));
                   a1=cir;
      System.out.println("area of circle="+a1.compute(1.4f,2.5f));
           }   }