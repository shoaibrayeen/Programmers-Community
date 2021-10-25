import java.util.*;

public class SolutionByHarjas {

    public static Scanner scn = new Scanner(System.in);

    public static void BinarySearch(int[] arr, int eleToFind) {
        int n = arr.length;
        int ans = BinarySearch(arr, 0, n - 1, eleToFind);
        if (ans == -1) {
            System.out.println("element not found");
        } else {
            System.out.println("element found at " + ans + "th index");
        }
    }

    public static int BinarySearch(int[] arr, int si, int ei, int eleToFind) {
        int ans = -1;
        while (si <= ei) {
            int mid = (si + ei) / 2;
            if (arr[mid] == eleToFind) {
                ans = mid;
                break;
            } else if (arr[mid] > eleToFind) {
                ei = mid - 1;
            } else {
                si = mid + 1;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        System.out.println("please enter the size of array");
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.println("please enter " + i + "th element in sorted order");
            arr[i] = scn.nextInt();
        }
        System.out.println("enter the element to find");
        int eleToFind = scn.nextInt();
        BinarySearch(arr, eleToFind);
    }
}