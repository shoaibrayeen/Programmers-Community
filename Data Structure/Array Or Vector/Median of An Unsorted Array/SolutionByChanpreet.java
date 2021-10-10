import java.util.Arrays;
import java.util.Scanner;

public class MedianOfArray {

    /*
     * Problem- An Unsorted Array is given and You need to find its median.
     * Approach- Sorting the Array
     * Time Complexity-O(nlogn) coz Arrays.sort uses quicksort in background
     */
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int size = sc.nextInt();

        int arr[] = new int[size];
        System.out.print("Enter the array : ");
        for (int i = 0; i < size; i++)
            arr[i] = sc.nextInt();

        System.out.println("Median of the array : " + findMedian(arr, size));

        sc.close();
    }

    private static double findMedian(int[] arr, int size) {
        Arrays.sort(arr);
        if (size % 2 == 0)
            return (double) ((arr[size / 2] + arr[size / 2 - 1]) / 2.0);
        else
            return (double) (arr[size / 2]);
    }

}
