import java.util.Scanner;

class RightRotateArray {
    private static int[] rightRotate(int arr[], int k) {
        //Segregate k elements from the right to a temporary array
        int temp[] = new int[k];

        int count = 0;

        while (count < k) {
            int i = (arr.length - k);

            while (i < arr.length) {
                for (int j = 0; j < temp.length; j++) {
                    temp[j] = arr[i++];
                    ++count;
                }
            }
        }

        int finalArray[] = new int[arr.length];
        for (int i = 0; i < temp.length; i++) {
            finalArray[i] = temp[i];
        }

        for (int i = k; i < finalArray.length; i++) {
            finalArray[i] = arr[i - k];
        }

        return finalArray;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        System.out.println("Enter the size of the array");
        int size = s.nextInt();
        int arr[] = new int[size];

        for (int i = 0; i < size; i++) {
            System.out.print("Enter arr[" + (i + 1) + "]: ");
            arr[i] = s.nextInt();
        }

        System.out.print("Enter the rotation index");
        int k = s.nextInt();

        int rotatedArray[] = rightRotate(arr, k);

        for (int i = 0; i < rotatedArray.length; i++) {
            System.out.println(rotatedArray[i]);
        }
    }

}
