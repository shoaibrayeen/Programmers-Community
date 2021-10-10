import java.util.Scanner;

class NonRepeatingElem {
    public static int find(int arr[], int size) {
        int unrepeated_elem = arr[0];

        for (int i = 1; i < arr.length; i++) {
            unrepeated_elem = unrepeated_elem ^ arr[i];
            // XOR of n with n itself =0
            //XOR of n with 0 is =n
        }
        return unrepeated_elem;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter the number of elements you want to input : ");
        int n = s.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {

            System.out.print("Enter arr[" + (i + 1) + "]: ");
            arr[i] = s.nextInt();
        }
        System.out.println("The non repeated element in the array is " + find(arr, n));
    }
}
