/*
Write a program to print the following pattern:
      * 
    * * 
  * * * 
* * * *
*/

class Main {
  public static void main(String[] args) {
    for (int i = 0; i < 4; i++) {
      for (int j = 3; j > (i); j--) {
        System.out.print("  ");
      }
      for (int k = 0; k < (i + 1); k++) {
          System.out.print("* ");
      }
      System.out.println("");
    }
  }
}
