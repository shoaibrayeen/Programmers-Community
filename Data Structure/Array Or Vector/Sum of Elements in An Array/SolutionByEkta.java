/*
   Program to find sum of all elements in an array
*/

import java.util.Scanner;

public class sumOfElementsOfArray {

    //function to calculate sum of elements
    public static long sum(int arr[]) {
        long sum = 0;
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("enter size");
        int N = s.nextInt();

        System.out.println("enter the elements");
        int arr[] = new int[N];
        for (int n = 0; n < N; n++) {
            arr[n] = s.nextInt();
        }

        System.out.println(sum(arr));
        s.close();
    }

}
