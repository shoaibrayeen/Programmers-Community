/*
 * Solution for Two Arrays are given and you need to find median of the array obtained after merging the 2 arrays.
 */

import java.util.*;

public class Median {

    public static void main(String[] args) throws Exception {

        Median median = new Median();
        //Taking input of sizes and array elements using custom methods
        System.out.print("\nEnter Size of 1st Array\t:\t");
        int size1 = median.takeInput();
        System.out.print("\nEnter Elements of 1st Array\t:\t");
        int arr1[] = median.takeArrayInput(size1);
        System.out.print("\nEnter Size of 2nd Array\t:\t");
        int size2 = median.takeInput();
        System.out.print("\nEnter Elements of 2nd Array\t:\t");
        int arr2[] = median.takeArrayInput(size2);
        //Calling function
        median.mergeMedian(arr1, arr2, size1, size2);
    }

    public int takeInput() {
        Scanner scn = new Scanner(System.in);
        int size = scn.nextInt();
        return size;
    }

    public int[] takeArrayInput(int size) {
        Scanner scn = new Scanner(System.in);
        int arr[] = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = scn.nextInt();
        return arr;
    }

    private void mergeMedian(int arr1[], int arr2[], int size1, int size2) {
        int i = 0, j = 0, k = 0;
        int sortedData[] = new int[size1 + size2];
        //Sorting the data in Ascending order
        while (i < size1 && j < size2) {
            if (arr1[i] < arr2[j])
                sortedData[k++] = arr1[i++];
            else
                sortedData[k++] = arr2[j++];
        }
        //If elements in arr1 are left ,all  are add directly
        while (i < size1) {
            sortedData[k++] = arr1[i++];
        }
        //Else if elements in arr2 are left ,all  are add directly
        while (j < size2) {
            sortedData[k++] = arr2[j++];
        }
        int median = 0;
        double medianValue = 0;
        int size = size1 + size2;
        //If no. of sorted elements are odd using median formula for odd size and printing
        if ((size & 1) == 1) {
            median = (size - 1) / 2;
            medianValue = sortedData[median];
            System.out.print("\nMedian\t:\t" + medianValue);
        }
//		If no. of sorted elements are even using median formula for even size and printing
        else {
            int median1 = (size - 1) / 2;
            int median2 = median1 + 1;
            medianValue = sortedData[median1] + sortedData[median2];
            medianValue /= 2;
            System.out.println("\nMedian\t:\t" + medianValue);
        }
    }

}
