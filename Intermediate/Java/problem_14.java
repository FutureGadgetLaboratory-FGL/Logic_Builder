/*Program to merge two arrays*/
// Solved by INikhita
import java.util.Scanner;
public class Merge
{
  public static void main(String[] args)
  {
    int i.k=0;
    int[] a = new int[5];
    int[] b = new int[5];
    int[] c = new int[10];
    Scanner scan = new Scanner(System.in);
    Scanner.out.print("Enter 5 Elements for first Array: ");
    for(i=0; i<5; i++)
      a[i] = scan.nextline();
    System.out.print("Enter 5 Elements for second Array: ");
    for(i=0; i<5; i++)
      b[i] = scan.nextline();
    for(i=0; i<5; i++,k++)
      c[k] = a[i];
    for(i=0; i<5; i++,k++)
      c[k] = b[i];
    System.out.println("\nThe merged array is: ");
    for(i=0; i<10; i++)
      System.out.print(c[i]+ " ");
  }
}
                          
