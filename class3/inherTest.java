//program to illustrate single inheritance

class Room
{
   int length;
   int breadth;
   Room(int x,int y)
    {  
      length=x;
      breadth=y;
    }
   int area()
    {  
     return(length*breadth);
    }
}
class Room1 extends Room
{
   int height;
    Room1(int x,int y,int z)
     {
       super(x,y);//pass value to the super class
       height=z;
     }
   int volume()
   {
      return(length*breadth*height);
    }
}
class inherTest
{
  public static void main(String args[])
    {
       Room1 r=new Room1(14,12,10);
       int area1=r.area();
       int volume1=r.volume();
       System.out.println("area="+area1);
       System.out.println("volume="+volume1);
   }
}

       

 