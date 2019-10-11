/*
    Program Description: Program to push all the zeroes to the end of the array
 */
import java.util.Scanner;

public class MoveZeroesToEnd {
    private static void moveZeroesToEnd(int[] array) {
        int indexOfZero = array.length-1;
        int currPos = 0;
        while(currPos <= indexOfZero){
            if(array[currPos] == 0){
                // if value at current indexofzero position contains a value of 0 then decrement the index position
                while(array[indexOfZero] == 0){
                    if(indexOfZero == currPos) return;
                    --indexOfZero;
                }
                int temp = array[indexOfZero];
                array[indexOfZero] = array[currPos];
                array[currPos] = temp;
                --indexOfZero;
            }
            currPos++;
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] array = new int[size];
        for(int i = 0;  i < size; i++){
            array[i] = scan.nextInt();
        }
        System.out.print("Original Array: ");
        for (int value : array) {
            System.out.print(value + " ");
        }
        System.out.println();
        moveZeroesToEnd(array);
        System.out.print("Modified Array: ");
        for (int value : array) {
            System.out.print(value + " ");
        }
    }
}
