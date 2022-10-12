import java.util.Scanner;  

public class problem_2{
  
  public static void main(String args[]){  
int p, r, t, SI;  
    
Scanner sc = new Scanner(System.in);  
    
System.out.print("Enter Principal Amount: ");  
p = sc.nextInt();  
    
System.out.print("Enter Principal Rate: ");  
r = sc.nextInt();  
    
System.out.print("Enter Time in Years: ");  
t = sc.nextInt(); 
    
SI = SI(p, r, t);  
System.out.println("Simple Interest: " + SI);  
}  
//method that calculates the sum  
public static int SI(int a, int b, int c)  
{  
int SI = (a*b*c)/100;  
return SI;  
}  
}
