import java.util.Scanner;

class ReverseArray {
    public static int[] reverse(int arr[]) {
        int reverse[] = new int[arr.length];
        int j = reverse.length;

        for (int i = 0; i < arr.length; i++) {
            reverse[--j] = arr[i];
        }
        return reverse;
    }

    public static void main(String[] args) {

        Scanner s = new Scanner(System.in);

        System.out.print("Enter the size of the array: ");
        int n = s.nextInt();

        int arr[] = new int[n];

        for (int i = 0; i < arr.length; i++) {
            System.out.print("Enter the value of arr[" + (i + 1) + "]:");
            arr[i] = s.nextInt();
        }

        int rev[] = reverse(arr);

        System.out.println("The reversed array is:");

        for (int i = 0; i < rev.length; i++) {
            System.out.println(rev[i]);
        }
    }
}
