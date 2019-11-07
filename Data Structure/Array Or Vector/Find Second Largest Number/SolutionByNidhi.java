/*
    Program Description: Program to find the second largest element in a given array
 */
import java.util.Scanner;

public class SecondLargestElement {
    private static int getSecondLargestElementIndex(int[] array) {
        if(array.length == 1){
            return -1;
        }
        int secondLargestElement = Integer.MIN_VALUE;
        int largestElement = Integer.MIN_VALUE;

        for(int i = 0; i < array.length; i++){
            if(largestElement < array[i]){
                secondLargestElement = largestElement;
                largestElement = array[i];
            }
            else if(secondLargestElement < array[i] && array[i] != largestElement){
                secondLargestElement = array[i];
            }
        }

        return secondLargestElement;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size and elements of array: ");
        int size = in.nextInt();
        int[] array = new int[size];
        for(int i = 0;  i < size; i++){
            array[i] = in.nextInt();
        }
        int secondLargestElement = getSecondLargestElementIndex(array);
        System.out.println("Second largest element: " + (secondLargestElement != Integer.MIN_VALUE ? secondLargestElement: "No second largest element"));
    }
}
