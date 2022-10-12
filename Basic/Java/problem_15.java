
import java.util.Scanner;

public class problem_15{
    public static void main(String args[]) {

Scanner input = new Scanner (System.in);
    
    System.out.print("Provide the Number, Please ");
    int number = input.nextInt();
    
    if( (number == 0 ) || (number%2 == 0) ){
        
        System.out.print(number+ " is a Even Number");
        
    }else{
        
        System.out.print(number +" is a Odd Number");
        
    }

 
   }
  
}
