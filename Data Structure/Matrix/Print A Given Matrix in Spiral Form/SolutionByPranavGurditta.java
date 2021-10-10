import java.io.*;
import java.util.*;

class SpiralArrays {
    public static void main(String[] args) throws java.lang.Exception {
        /**
         Aim: Main function of the class SpiralArrays, to input and print the 2D array in a spiral manner.
         */
        SpiralArrays obj = new SpiralArrays();
        obj.input_print();

    }

    void input_print() {
        /**
         Aim: To input the number of rows,columns and elements of the 2D array and call a function to print in spiral manner
         */
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of rows");
        int rows = sc.nextInt();
        System.out.println("Enter the number of columns");
        int columns = sc.nextInt();
        int spiral[][] = new int[rows][columns];
        System.out.println("Enter the elements of the spiral");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                spiral[i][j] = sc.nextInt();

            }

        }
        spiralprint(spiral, rows, columns);

    }

    void spiralprint(int a[][], int rows, int columns) {
        /**
         Aim: To print the elements entered in 2D array a with the shape rows*columns in a spiral manner
         Input:
         a: A 2D integer array
         rows: an integer variable to tell about the number of rows of the 2D array a
         columns: an interger variable to tell about the number of columns of the 2D array a
         Output:
         To print in a single line, the list of elements of the 2D array in a spiral manner
         */

        int left = 0;
        int right = columns - 1;
        int top = 0;
        int bottom = rows - 1;
        int count = 0;
        while (count != (rows * columns)) {
            for (int i = left; i <= right; i++) {
                System.out.print(a[top][i] + " ");
                count++;

            }
            for (int i = top + 1; i <= bottom; i++) {
                System.out.print(a[i][right] + " ");
                count++;

            }
            for (int i = right - 1; i >= left; i--) {
                System.out.print(a[bottom][i] + " ");
                count++;

            }
            for (int i = bottom - 1; i >= top + 1; i--) {
                System.out.print(a[i][left] + " ");
                count++;

            }
            left++;
            right--;
            top++;
            bottom--;
        }
    }
}
