/*
    Program Description: This program prints a given matrix in spiral form
 */
import java.util.Scanner;

public class SpiralMatrix {

    // method to print matrix in spiral form
    private static void printSpiralMatrix(int[][] array) {

        int noOfRows = array.length;
        int noOfCols = array[0].length;
        for(int row = 0; row < noOfRows; row++){
            // if current row has even index, print elments from left to right
            if(row % 2 == 0){
                for(int col = 0; col < noOfCols; col++) {
                    System.out.print(array[row][col] + " ");
                }
            }
            // otherwise, print elements from right to left
            else {
                for (int col = noOfCols - 1; col >= 0; col--) {
                    System.out.print(array[row][col] + " ");
                }
            }
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int noOfRows = scan.nextInt();                          
        int noOfCols = scan.nextInt();
        int[][] array = new int[noOfRows][noOfCols];
        for(int row = 0; row < noOfRows; row++){
            for(int col = 0; col < noOfCols; col++) {
                array[row][col] = scan.nextInt();
            }
        }
        printSpiralMatrix(array);
    }
}
