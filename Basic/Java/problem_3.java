import java.util.Scanner;

public class problem_3{
  
  public static void main(String[] args) 
    
  {
    Scanner input = new Scanner (System.in);
    
    System.out.print("Width of Rectangle: ");
    int width = input.nextInt();
    System.out.print("Height of Rectangle: ");
    int height = input.nextInt();
    
    int area = width*height;
    
    System.out.println();
    
    System.out.println("Area of Rectangle: "+area);
  }
}
