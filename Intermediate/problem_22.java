/*22. Display the pattern below
      A 
      B B
      C C C
      D D D D

*/

public class problem_22{

    public static void main(String[] args) {
        char j ='A';
        for(int i=1;i<5;i++){
            for(int k=0;k<i;k++){
                System.out.print(j+" ");
            }
            j++;
            System.out.println();
        }
    }
}

