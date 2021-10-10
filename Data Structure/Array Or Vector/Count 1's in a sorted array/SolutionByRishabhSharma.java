import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }
        int count = Count1s(arr, 1);
        if (count == -1) {
            System.out.println("Not Found ");
        } else {
            System.out.println(arr.length - count);
        }
    }

    public static int Count1s(int[] arr, int k) {
        int low = 0, high = arr.length - 1;
        int mid = low + (high - low) / 2;

        while (low <= high) {
            if (arr[mid] == k && (mid == 0 || arr[mid - 1] != k)) {
                return mid;
            } else if (arr[mid] >= k) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
            mid = low + (high - low) / 2;
        }

        return -1;

    }
}

// Test Cases

// Input

// 5
// 0 0 1 1 1 
// Output
// 3

// 7
// 0 0 0 1 1 1 1 
// Output 
// 4
