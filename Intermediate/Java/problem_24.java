/* 24. Display the pattern below
      A
      A B 
      A B C
      A B C D
*/

public class problem_24 {
    public static void main(String[] args) {
        for(int i=1;i<5;i++){
            char j ='A';
            for(int k=0;k<i;k++){
                System.out.print(j+" ");
                j++;
            }
            System.out.println();
        }
    }
}
