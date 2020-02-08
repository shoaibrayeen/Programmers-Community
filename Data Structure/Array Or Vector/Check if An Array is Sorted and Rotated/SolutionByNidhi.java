/*
    Program Description: Program to check whether array is sorted and rotated
 */
import java.util.Arrays;
import java.util.Scanner;

public class SortedAndRotated {
    private static boolean isSortedAndRotated(int[] array) {
        int smallest = -1, len = array.length;

        // find the smallest element in the array
        for(int i = 1 ; i < array.length; i++) {
            if(array[i] < array[i-1] && array[i] < array[(i + 1) % len]){
                smallest = i;
                break;
            }
        }
        // if array is already sorted but not rotated
        if(smallest == -1) {
            return false;
        }

        // repositioning the array elements in a sorted order
        int[] newArray = new int[array.length];
        newArray[0] = array[smallest];
        int k = 1;
        if(array[smallest-1] > array[(smallest+1) % len]) {
            for(int i = (smallest+1) % len; i  < array.length; i++){
                newArray[k] = array[i];
                k++;
            }
            for(int i = 0; i < smallest; i++){
                newArray[k] = array[i];
                k++;
            }
        }
        else {
            return false;
        }
        Arrays.sort(array);
        
        return Arrays.equals(newArray, array);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Size of array: ");
        int size = scan.nextInt();
        System.out.println("Enter array elements: ");
        int[] array = new int[size];
        for(int i = 0; i <  size; i++){
            array[i] = scan.nextInt();
        }
        System.out.println("Is array Sorted and Rotated? = " + (isSortedAndRotated(array) ? "Yes" : "No"));
    }
}
