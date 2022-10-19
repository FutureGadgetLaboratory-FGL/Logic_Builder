import java.util.*;
public class Main
{
  public static void main (String[]args)
  {
     float base, height;
     Scanner input = new Scanner (System.in);

      System.out.println ("Enter Base value  : ");
      base = input.nextFloat ();
      System.out.println ("Enter height value  : ");
      height = input.nextFloat ();
      
      System.out.print ("Area Of The Triangle : ");
      System.out.println (getAreaOfTriangle (base, height));
  }
  private static double getAreaOfTriangle (float base, float height)
  {
    double area;
    area = (0.5 * base * height);
    return area;

  }
}
