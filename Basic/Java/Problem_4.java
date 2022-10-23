import java.util.Scanner;

public class AreaS
{
   public static void main(String[] args)
   {
      float side, area;
      Scanner s = new Scanner(System.in);
      
      System.out.print("Enter the Side Length of Square: ");
      side = s.nextFloat();
      
      area = side*side;
      System.out.println("\nArea = " +area);
   }
}
