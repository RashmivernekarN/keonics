  //IMPLEMENTING MULTIPLE INHERITANCE

class student
{  
     int roll_no;
     void getnumber(int n)
      {
           roll_no=n;
      }
   void putnumber()
  {
        System.out.println("roll no="+roll_no);
  }
}

class Test extends student
{
    float part1,part2;
    void getmarks(float m1,float m2)
   {
         part1=m1;
         part2=m2;
   }
    void putmarks()
  {
     System.out.println("marks obtained");
 System.out.println("part1="+part1);
 System.out.println("part2="+part2);
}
}
interface sports
{
    float sportwt=6.0f;
    void putwt();
}
class Result extends Test implements sports
{
   float total;
   public void putwt()
{
    System.out.println("sports wt="+sportwt);
}
void display()
{
   total=part1+part2+sportwt;
  putnumber();
  putmarks();
  putwt();
 System.out.println("total score="+total);
}
}
class Hybrid
{
  public static void main(String args[])
{  
     Result s1=new Result();
  s1.getnumber(3456);
  s1.getmarks(27.5f,33.0f);
s1.display();
}
}