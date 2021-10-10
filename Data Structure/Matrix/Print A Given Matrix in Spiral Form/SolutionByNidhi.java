/*
    Program Description: This program prints a given matrix in spiral form
 */

import java.util.Scanner;

public class SpiralMatrix {

    // method to print matrix in spiral form
    private static void printSpiralMatrix(int[][] array) {

        /*
            Approach:
                1. Print all the elements of topRow
                2. Print the last rightmost element of all the rows between topIndex and bottomIndex
                3. Print all the elements of lastRow from right to left
                4. Print elements from bottom to top of the first column denoted by leftIndex
         */
        int topIndex = 0;                          // top row
        int bottomIndex = array.length;             // bottom row
        int rightIndex = array[0].length;           // last column
        int leftIndex = 0;                          // first column

        while (bottomIndex > topIndex && leftIndex < rightIndex) {
            // print top row
            for (int j = leftIndex; j < rightIndex; j++) {
                System.out.print(array[topIndex][j] + " ");
            }
            topIndex++;

            // print last column
            for (int i = topIndex; i < bottomIndex; i++) {
                System.out.print(array[i][rightIndex - 1] + " ");
            }
            rightIndex--;

            // print bottom row
            if (topIndex < bottomIndex) {
                for (int j = rightIndex - 1; j >= leftIndex; j--) {
                    System.out.print(array[bottomIndex - 1][j] + " ");
                }
                bottomIndex--;
            }


            // print first column
            if (leftIndex < rightIndex) {
                for (int i = bottomIndex - 1; i > topIndex - 1; i--) {
                    System.out.print(array[i][leftIndex] + " ");
                }
                leftIndex++;
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int noOfRows = scan.nextInt();
        int noOfCols = scan.nextInt();
        int[][] array = new int[noOfRows][noOfCols];
        for (int row = 0; row < noOfRows; row++) {
            for (int col = 0; col < noOfCols; col++) {
                array[row][col] = scan.nextInt();
            }
        }
        printSpiralMatrix(array);
    }
}
