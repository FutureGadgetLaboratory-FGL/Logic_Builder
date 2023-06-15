/* Find First and Last Position of Elements in Sorted Array */
// Solved by Rohit14Mondal

import java.util.ArrayList;
public class firstlast {
	public static int first(ArrayList list, int x)
	{
		
		return list.indexOf(x);
	}
	public static int last(ArrayList list, int x)
	{
		
		return list.lastIndexOf(x);
	}
	public static void main(String[] args)
	{
		int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8, 8 };
		ArrayList<Integer> clist = new ArrayList<>();

		
		for (int i : arr)
			clist.add(i);
		int x = 8;

		
		System.out.println("First Occurrence = "
						+ first(clist, x));

	
		System.out.println("Last Occurrence = "
						+ last(clist, x));
	}
}

