/*
    Program Description: Program to find the second largest element in a given array
 */
import java.util.Scanner;

public class SecondLargestElement {
    private static int getSecondLargestElementIndex(int[] array) {
        if(array.length == 1){
            return -1;
        }
        int secondLargestElementIndex;
        int largestElementIndex;

        if(array[0] > array[1]) {
            largestElementIndex = 0;
            secondLargestElementIndex = 1;
        }else {
            largestElementIndex = 1;
            secondLargestElementIndex = 0;
        }


        for(int i = 3; i < array.length; i++) {
            if(array[largestElementIndex] < array[i]) {
                secondLargestElementIndex = largestElementIndex;
                largestElementIndex = i;
            }
        }
        return secondLargestElementIndex;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int size = in.nextInt();
        System.out.println("Enter array elements:");
        int[] array = new int[size];
        for(int i = 0;  i < size; i++){
            array[i] = in.nextInt();
        }
        int secondLargestElementIndex = getSecondLargestElementIndex(array);
        System.out.println("Second largest element: " + (secondLargestElementIndex == -1 ? "No second largest element": array[secondLargestElementIndex]));
    }
}
