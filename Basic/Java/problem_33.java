public class PiramideNumbers {
  
    public static void main(String args[]) {
      
      int number = 1;
      
      for (int i = 1; i<=4; i++){
          for (int y = 1; y <=i; y++){
            
            System.out.print(number++);
            System.out.print(" ");
            
          }
          
          System.out.println();
      }
      
    }
}
