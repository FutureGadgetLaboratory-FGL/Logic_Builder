import java.util.Scanner;
public class Main
{
  public static void main (String[]args)
  {
    Scanner sc = new Scanner (System.in);

    int i, fact = 1;
    System.out.println ("Please Enter Number for calculating factorial");
    int number = sc.nextInt ();
      fact = factorial (number);	// function to calculate factorial using Recursive approch.  
      System.out.println ("Factorial of " + number + " is: " + fact);
  }

  private static int factorial (int n)
  {
    if (n == 0)
      return 1;
    else
      return (n * factorial (n - 1));
  }
}
