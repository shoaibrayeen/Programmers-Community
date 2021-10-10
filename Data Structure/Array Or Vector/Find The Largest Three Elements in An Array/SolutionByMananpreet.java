import java.util.Scanner;

class LargestThreeElementsInAnArray {
    private static void threeLargest(int arr[]) {
        int highest = Integer.MIN_VALUE;
        int secondHighest = Integer.MIN_VALUE;
        int thirdHighest = Integer.MIN_VALUE;

        if (arr.length < 3)
            System.out.println("Error! Enter atleast three or more values.");

        else {
            for (int i = 0; i < arr.length; i++) {
                if (arr[i] > highest) {
                    thirdHighest = secondHighest;
                    secondHighest = highest;
                    highest = arr[i];
                }

                if (arr[i] > secondHighest && arr[i] < highest) {
                    thirdHighest = secondHighest;
                    secondHighest = arr[i];
                }

                if (arr[i] > thirdHighest && arr[i] < secondHighest) {
                    thirdHighest = arr[i];
                }
            }
            System.out.println("The three largest values are " + highest + ", " + secondHighest + ", " + thirdHighest + ".");
        }
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the length of the array : ");
        int n = s.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            System.out.print("Enter value " + (i + 1) + ": ");
            arr[i] = s.nextInt();
        }

        threeLargest(arr);
    }
}
