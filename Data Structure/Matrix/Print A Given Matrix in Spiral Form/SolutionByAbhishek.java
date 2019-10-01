/*
  Program Description - This program prints the given matrix in spiral form.
  Time Complexity: O(n)
  Space Complexity: O(1)
  Solution Description: Print each of the four boundaries and reduce the boundary.
*/

import java.util.*;

class SolutionByAbhishek {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of rows in matrix:");
        int rows = sc.nextInt();
        System.out.println("Enter number of columns in matrix:");
        int columns = sc.nextInt();
        System.out.println("Enter matrix elements:");
        int[][] mat = new int[rows][columns];
        for (int i = 0; i < mat.length; i++) {
            for (int j = 0; j < mat[0].length; j++) {
                mat[i][j] = sc.nextInt();
            }
        }

        printSpiralForm(mat);

    }

    public static void printSpiralForm(int[][] mat) {
        int top, bottom, left, right, i, j;

        top = 0;
        bottom = mat.length - 1;
        left = 0;
        right = mat[0].length - 1;
        i = top;
        j = left;

        int count = 1;
        int totalElements = mat.length * mat[0].length;
        while (count <= totalElements) {
            // Print top boundary
            for (j = left; j <= right; j++) {
                if(count > totalElements) return;

                System.out.print(mat[i][j] + " ");
                count++;
            }
            top++;
            j--;

            // Print right boundary
            for (i = top; i <= bottom; i++) {
                if(count > totalElements) return;

                System.out.print(mat[i][j] + " ");
                count++;
            }
            right--;
            i--;

            // Print bottom boundary
            for (j = right; j >= left; j--) {
                if(count > totalElements) return;

                System.out.print(mat[i][j] + " ");
                count++;
            }
            bottom--;
            j++;

            // Print left boundary
            for (i = bottom; i >= top; i--) {
                if(count > totalElements) return;

                System.out.print(mat[i][j] + " ");
                count++;
            }
            left++;
            i++;
        }

    }
}
