//program to illustrate Method overloading ,constructor

class Room
{
   float length,breadth;
  Room(float x,float y)
  {
     length=x;
     breadth=y;
 } 
  Room(float x)
 {
  length=breadth=x;
  }
  float area()
 {
 return(length*breadth);
 }
}
class MethodOverloading
{
     public static void main(String args[])
     {
     Room room1=new Room(25.0f,15.0f);
     Room room2=new Room(20.0f);    
     System.out.println("Area1="+room1.area());
     System.out.println("Area2="+room2.area());
     }
}
