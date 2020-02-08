/*
  Program Description - This program sorts an array of 0s and 1s.
  Time Complexity: O(n)
  Space Complexity: O(1)
  Solution Description: use two pointers for partitioning
*/

import java.util.*;

class SolutionByAbhishek {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int len = sc.nextInt();
        int[] arr = new int[len];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        sortO1array(arr);
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void sortO1array(int[] arr) {
        int zero = 0;
        int one = 1;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == 0) {
                int temp = arr[zero];
                arr[zero] = arr[i];
                arr[i] = temp;
                zero++;
                one++;
            } else {
                one++;
            }
        }

    }

}
