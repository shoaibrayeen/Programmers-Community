/*
    Program Description: Program to search an element in a sorted array
    Approach: Binary Search
 */
import java.util.Scanner;

public class SearchInSortedArray {
    private static boolean searchElement(int[] array, int element){
        int start = 0, end = array.length-1;
        while(start <= end) {
            int mid = (start + end)/2;
            if(array[mid] == element){
                return true;
            }
            else if(array[mid] > element) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] array = new int[size];
        for(int i = 0; i < size; i++) {
            array[i] = scan.nextInt();
        }
        int elementToBeSearched = scan.nextInt();
        System.out.println(searchElement(array, elementToBeSearched) ? "YES" : "NO");
    }
}
