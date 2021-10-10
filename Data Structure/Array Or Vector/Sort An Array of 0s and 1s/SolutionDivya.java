import java.io.*;
import java.util.*;

class Solution {

    private static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    private static void sort(int[] arr, int n) {

        int i = 0, j = 0;
        while (i < n) {
            if (arr[i] == 0) {
                swap(arr, i, j);
                j++;
            }
            i++;
        }
    }

    public static void main(String[] args) throws java.lang.Exception {
        // your code goes here
        Scanner scn = new Scanner(System.in);
        //array size
        int n = scn.nextInt();
        int[] arr = new int[n];

        //array input
        for (int i = 0; i < n; i++) arr[i] = scn.nextInt();

        //sort fucntion call
        sort(arr, n);

        //display
        for (int i = 0; i < n; i++) System.out.println(arr[i]);

    }
}
