/* 23. Display the pattern below
        A
        B C
        D E F
        G H I J

*/

public class problem_23{

    public static void main(String[] args) {
        char j ='A';
        for(int i=1;i<5;i++){
            for(int k=0;k<i;k++){
                System.out.print(j+" ");
                j++;
            }
            System.out.println();
        }
    }
}
