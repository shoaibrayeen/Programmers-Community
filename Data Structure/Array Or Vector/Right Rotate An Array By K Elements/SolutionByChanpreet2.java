import java.util.Scanner;

public class RightRotateArray {

    /*
     * Problem - Right rotate an array
     * Approach - reverse the array
     * Time complexity - O(n)
     * */

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int d, a[], size;
        //int a[] = {1,2,3,4};
        System.out.print("Enter size of array : ");
        size = sc.nextInt();
        a = new int[size];
        System.out.print("Enter the array : ");
        for (int i = 0; i < size; i++)
            a[i] = sc.nextInt();

        System.out.print("Enter d : ");
        d = sc.nextInt();
        d--;

        //At first reverse the whole array
        reverse(a, 0, a.length - 1);
        //Now reverse till d
        reverse(a, 0, d);
        //then reverse form d+1 to the end
        reverse(a, d + 1, a.length - 1);


        System.out.print("Rotated array is: ");
        display(a);

        sc.close();
    }

    //FUNCTION TO DISPLAY ARRAY
    private static void display(int[] a) {
        for (int i : a)
            System.out.print(i + " ");
    }

    //UTILITY FUNCTION TO REVERSE ARRAY
    private static int[] reverse(int[] a, int low, int high) {

        //base case
        if (low >= high) {
            return a;
        }

        swap(a, low, high);
        low++;
        high--;
        return reverse(a, low, high);
    }

    //UTILITY FUNCTION TO SWAP
    private static void swap(int[] a, int low, int high) {
        int temp;
        temp = a[low];
        a[low] = a[high];
        a[high] = temp;
    }
}
