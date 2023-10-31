/*Write a program for insertion sort*/
//Solved by INikhita
import java.util.Arrays;
class InsertionSort {
  void insertionSort(int array[]) {
    int size = array.length;
    for(int step = 1;step<size;step++) {
      int key = array[step];
      int j = step - 1;
      while(j >= 0 && key < array[j]) {
        array[j + 1] = array[j];
         --j;
      }
      array[j + 1] = key;
    }
  }
  public static void main(String args[]) {
    int[] data = { 9, 5, 1, 4, 3 };
    InsertionSort is = new InsertionSort();
    is.insertionSort(data);
    System.out.println("Sorted Array in Ascending Order: ");
    System.out.println(Arrays.toString(data));
  }
}
