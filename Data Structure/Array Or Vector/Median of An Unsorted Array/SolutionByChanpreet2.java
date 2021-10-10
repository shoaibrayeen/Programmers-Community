import java.util.Scanner;

public class MedianOfArrayUsingRandomizedSelect {
    /*
     * Problem- An Unsorted Array is given and You need to find its median.
     * Approach- Using KthSmallestElementAlgo AKA RandomizedSelect
     * Time Complexity-O(n) [Worst Case  Linear Time]
     */


    //FUNCTION TO FIND MEDIAN
    private static double findMedianUsingRandomizedSelect(int[] arr, int size) {
        if (size % 2 == 0) {
            int k1 = size / 2;
            int k2 = k1 + 1;
            // just find the location of the desired element only and that lies in the middle of the array
            return (double) ((KthSmallest(arr, 0, size - 1, k1) + KthSmallest(arr, 0, size - 1, k2)) / 2.0);
        } else {
            int k = size / 2 + 1;
            System.out.println("K:" + k);
            return (double) (KthSmallest(arr, 0, size - 1, k));
        }
    }


    //TO FIND KTH SMALLEST
    private static int KthSmallest(int[] arr, int low, int high, int k) {
        if (k > 0 && k <= high - low + 1) {
            int partition = randomisedPartition(arr, low, high);
            int size = partition - low + 1;
            if (k == size)
                return arr[partition];
            else if (k < size) {
                return KthSmallest(arr, low, partition - 1, k);
            } else
                return KthSmallest(arr, partition + 1, high, k - size);
        }
        return 0;    //case of failure which actually will never happen
    }


    //FOR SWAPPING THE LAST VARIABLE WITH A RANDOM INDEX
    private static int randomisedPartition(int[] arr, int low, int high) {
        int size = high - low + 1;
        int random = low + (int) (Math.random() * (size - 1));
        swap(arr, random, high);
        return partition(arr, low, high);
    }


    //PARTITION FUNCTION TO PARTITION THE ELEMENT AROUND PIVOT
    private static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] <= pivot) {
                swap(arr, i, j);
                i++;
            }
        }
        swap(arr, i, high);
        return i;
    }


    //UTILITY FUNCTION
    private static void swap(int[] arr, int i, int j) {
        int temp;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }


    //MAIN FUNCTION
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int size = sc.nextInt();

        int arr[] = new int[size];
        System.out.print("Enter the array : ");
        for (int i = 0; i < size; i++)
            arr[i] = sc.nextInt();

        System.out.println("Median of the array : " + findMedianUsingRandomizedSelect(arr, size));
        sc.close();
    }

}
