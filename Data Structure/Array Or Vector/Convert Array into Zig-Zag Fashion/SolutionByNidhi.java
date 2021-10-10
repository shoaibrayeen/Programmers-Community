/*
    Program Description: This program prints an array in a zig zag pattern i.e. a < b > c < d > e ....
 */

import java.util.Scanner;

public class ZigZagArray {
    /*
      Method Description: method to rearrange array elements in zig-zag pattern
    */
    private static void makeZigZagArray(int[] array) {

        //variable ascendingOrder tells whether the next pair of elements are to be arranged in ascending order or not
        boolean ascendingOrder = true;
        for (int i = 0; i < array.length - 1; i++) {
            if (ascendingOrder) {                    // arrange next two elements in ascending order
                if (array[i] > array[i + 1]) {
                    swap(array, i, i + 1);
                }
            } else {                                 // arrange next two elements in descending order
                if (array[i] < array[i + 1]) {
                    swap(array, i, i + 1);
                }
            }
            ascendingOrder = !ascendingOrder;
        }
    }

    /*
        Method description: utility method to swap ith and jth indexed values of the given array
     */
    private static void swap(int[] array, int i, int j) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = scan.nextInt();
        }
        makeZigZagArray(array);

        // print the new zig zag array
        for (int value : array) {
            System.out.print(value + " ");
        }
    }
}
