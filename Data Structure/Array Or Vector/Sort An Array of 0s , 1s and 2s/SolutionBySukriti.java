import java.util.*;

public class SolutionBySukriti {

    public static void sort012(int[] arr) {
        int nextZero = 0;
        int nextTwo = arr.length - 1;
        int i = 0;
        while (i <= nextTwo) {

            if (arr[i] == 0) {
                int temp = arr[i];
                arr[i] = arr[nextZero];
                arr[nextZero] = temp;
                i++;
                nextZero++;
            } else if (arr[i] == 2) {
                int temp = arr[i];
                arr[i] = arr[nextTwo];
                arr[nextTwo] = temp;

                nextTwo--;
            } else {
                i++;

            }
        }

    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Input size: ");
        int size = s.nextInt();
        int arr[] = new int[size];
        for (int i = 0; i < size; i++)
            arr[i] = s.nextInt();
        sort012(arr);
        System.out.println("Sorted Array : ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
