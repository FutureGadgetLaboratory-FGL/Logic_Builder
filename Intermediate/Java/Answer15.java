// Q15 Write a program to add two matrices.

import java.util.Scanner;
public class Answer15{
    public static void main(String[] args) {
        Scanner take= new Scanner(System.in);
        int[][] matrix1 = new int[3][5];
        int[][] matrix2 = new int[3][5];
        int[][] result = new int[3][5];

        System.out.println("Enter 15 elements for matrix 1");
        for(int i=0;i<3;i++){
            for(int j=0;j<5;j++){
                matrix1[i][j]= take.nextInt();
            }
        }
        System.out.println("Enter 15 elements for matrix 2");
        for(int i=0;i<3;i++){
            for(int j=0;j<5;j++){
                matrix2[i][j]= take.nextInt();
            }
        }

        for(int i=0;i<3;i++){
            for(int j=0;j<5;j++){
                result[i][j] = matrix1[i][j]+matrix2[i][j];
                System.out.print(result[i][j]+" ");
            }
            System.out.println();
        }   
        take.close();
    }
}

