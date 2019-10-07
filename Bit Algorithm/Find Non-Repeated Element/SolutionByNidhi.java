/*
    Program Description: This program finds a unique element among other duplicate elements
 */

import java.util.Scanner;

public class FindNonRepeatedElement {
    /*
        Method Description: method to find unique (non-repeated) element
        Approach: perform xor operation on all the array elements, the final value of xor operation is the value of the unique element
     */
    private static int findNonRepeatedElement(int[] array){
        int xorOfElements = array[0];
        for(int i = 1; i < array.length; i++){
            xorOfElements ^= array[i];
        }
        return xorOfElements;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] array = new int[size];
        for (int i = 0; i < size; i++){
            array[i] = scan.nextInt();
        }
        System.out.println(findNonRepeatedElement(array));
    }
}
