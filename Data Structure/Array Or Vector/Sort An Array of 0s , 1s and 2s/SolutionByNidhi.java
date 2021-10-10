/*
  Program Description: Program to sort an array of 0s, 1s, and 2s.
*/

import java.util.Scanner;

public class Sort012 {
    private static int[] sort012(int[] array) {
        int zeroIndex = 0, twoIndex = array.length - 1;
        int curr = 0;

        while (curr <= twoIndex) {
            if (array[curr] == 0) {
                swap(array, curr, zeroIndex);
                zeroIndex++;
                curr++;
            } else if (array[curr] == 2) {
                swap(array, curr, twoIndex);
                twoIndex--;
            } else
                curr++;
        }
        return array;
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
        System.out.print("Sorted Array : ");
        sort012(array);
        for (int value : array) {
            System.out.print(value + " ");
        }
    }
}
