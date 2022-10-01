/*
Program to perform bit manipulation
*/

// Author : glitchy-coder-exe


import java.util.*;

public class #6 {
    public static int get(int a, int pos) {
        int x = 1;
        x = x << pos;
        a = a & x;
        if (a == 0)
            return 0;
        else
            return 1;
    }

    public static int set(int a, int pos) {
        int x = 1;
        x = x << pos;
        a = a | x;
        return a;
    }

    public static int clear(int a, int pos) {
        int x = 1;
        x = ~(x << pos);
        a = a & x;
        return a;
    }

    public static int update(int a, int pos, int bit) {
        if (bit == 0)
            a = clear(a, pos);
        else if (bit == 1)
            a = set(a, pos);
        else
            System.out.println("You should had entered a valid update bit!");
        return a;
    }

    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter the integer: ");
            int a = sc.nextInt();
            System.out.println("Enter the bit on which you want to perform the operation: ");
            int pos = sc.nextInt();
            System.out.println("Enter the operation you want to perform: (get, set, clear, update)");
            String op = sc.next();
            switch (op) {
                case "get":
                    System.out.println("The bit present at position " + pos + " = " + get(a, pos));
                    break;
                case "set":
                    System.out.println("The new number formed = " + set(a, pos));
                    break;
                case "clear":
                    System.out.println("The new number formed = " + clear(a, pos));
                    break;
                case "update":
                    System.out.println("Enter the bit you want to set at the given place: ");
                    int bit = sc.nextInt();
                    System.out.println("The new number formed = " + update(a, pos, bit));
                    break;
                default:
                    System.out.println("You entered an invalid operation!!!");
            }
        }
    }
}
