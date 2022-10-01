/*

Display the pattern below

  *     *
 * *   * *
* * * * * *
 * *   * *
  *     *  
 
 */
//solved by nam710
public class program_3{

     public static void main(String []args){
      int k=5;
      int k2=3;
     for(int i=1;i<=3;i++){
         for(int t=3-i;t>=1;t--){
             System.out.print(" ");
         }
         for(int j=1;j<=i;j++){
             System.out.print("*");
             if(j!=i)
             System.out.print(" ");
         }
         
         for(int t2=k;t2>=1;t2--)
             System.out.print(" ");
         k=k-2;
         for(int j=1;j<=i;j++){
            System.out.print("*");
            if(j!=i)
            System.out.print(" ");
        }

         
         System.out.println();
     }
     for(int i=1;i<=2;i++){
        for(int t=1;t<=i;t++)
        System.out.print(" ");
        for(int j=1;j>=i-1;j--){
            System.out.print("*");
            if(j!=i-1)
            System.out.print(" ");
        }
        for (int t2=k2;t2>=1;t2--)
        System.out.print(" ");
        k2 = k2+2;
        for(int j=1;j>=i-1;j--){
            System.out.print("*");
            if(j!=i-1)
            System.out.print(" ");
        }
        System.out.println();
     }
     }
}
