/*
    Program Description: Program to sort an array containing 0s and 1s
 */

import java.util.Scanner;

public class Sort01 {
    private static void sort01(int[] array) {
        int markZero = -1;
        for (int i = 0; i < array.length; i++) {
            if (array[i] == 0) {
                if (markZero == -1) {
                    markZero++;
                }
                swap(array, i, markZero);
                markZero++;
            }
        }
    }

    private static void swap(int[] array, int i, int markZero) {
        int temp = array[i];
        array[i] = array[markZero];
        array[markZero] = temp;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = scan.nextInt();
        }
        System.out.print("Modified Array : ");
        sort01(array);
        for (int value : array) {
            System.out.print(value + " ");
        }
    }
}
