import java.util.Scanner;

class ZeroesToEndOfArray {
    public static int[] move(int arr[]) {
        int count = 0;
        int f[] = new int[arr.length];

        //Trvaersing through the array for putting in the non zero values in final[]
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != 0) {
                f[count] = arr[i];
                count++;
            }
        }
        //Pushing zeroes now to compensate the length of arr[]
        while (count < arr.length) {
            f[count] = 0;
            count++;
        }

        return f;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.print("Enter the size of the array : ");
        int n = s.nextInt();

        int arr[] = new int[n];

        for (int i = 0; i < arr.length; i++) {
            System.out.print("Enter the value of arr[" + (i + 1) + "]:");
            arr[i] = s.nextInt();
        }

        System.out.print("The new array after having shifted the zeroes to end is:");
        int array[] = move(arr);

        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i] + " ");
        }
    }
}
