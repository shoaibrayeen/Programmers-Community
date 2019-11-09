/*
    Program Description: Program to find the 3 largest elements in a given array
 */
import java.util.Scanner;

public class LargestThreeElements {
    private static int[] getLargestThree(int[] array) {
        if(array.length < 3){
            return null;
        }

        int firstLargest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;
        int thirdLargest = Integer.MIN_VALUE;

        for (int value : array) {
            if (firstLargest < value) {
                thirdLargest = secondLargest;
                secondLargest = firstLargest;
                firstLargest = value;
            } else if (secondLargest < value && value != firstLargest) {
                thirdLargest = secondLargest;
                secondLargest = value;
            } else if(thirdLargest < value && value != secondLargest){
                thirdLargest = value;
            }
        }
        return new int[]{firstLargest, secondLargest, thirdLargest};
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int size = in.nextInt();
        System.out.println("Enter array elements:");
        int[] array = new int[size];
        for (int i = 0; i < size; i++) {
            array[i] = in.nextInt();
        }
        int[] threeLargest = getLargestThree(array);
        if(threeLargest == null){
            System.out.println("invalid array size");
            return;
        }
        System.out.println("Three largest elements");
        for (int value: threeLargest) {
            System.out.println(value);
        }
    }
}
