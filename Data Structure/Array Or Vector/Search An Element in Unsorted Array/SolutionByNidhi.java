/*
    Program Description: Program to search for a element in an unsorted array
 */
import java.util.Scanner;

public class SearchInUnsortedArray {
    private static boolean searchElement(int[] array, int element){
        boolean found = false;
        for (int value : array) {
            if (value == element) {
                found = true;
                break;
            }
        }
        return found;
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
