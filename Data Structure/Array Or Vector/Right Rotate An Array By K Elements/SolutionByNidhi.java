/*
    Program Description: Program to rotate an array by k elements
 */

import java.util.Scanner;

public class RightRotate {
    /*
        Method Description: Method to right rotate an array by k elements
        Time Complexity: O(n)
     */
    private static int[] rightRotation(int[] array, int k) {
        int[] rotatedArray = new int[array.length];
        int size = array.length, pos = 0;
        k = k % size;                           // if k > size(array) then set k = k mod size(array)
        for (int i = 0; i < size; i++) {
            pos = (i + k) % size;
            rotatedArray[pos] = array[i];
        }
        return rotatedArray;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        if (k < 0) {
            System.out.println("Invalid value of k");
            return;
        }
        int[] array = new int[n];

        for (int i = 0; i < n; i++) {
            array[i] = in.nextInt();
        }

        int[] rotatedArray = rightRotation(array, k);
        for (int i = 0; i < rotatedArray.length; i++) {
            System.out.print(rotatedArray[i] + " ");
        }
        System.out.println("");
    }
}
