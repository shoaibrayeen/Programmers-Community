import java.util.Scanner;

// Java program for implementation of Insertion Sort 
class InsertionSort {

    static void printArray(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; ++i) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String args[]) {

        System.out.println("Enter the size of the Array");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m;

        int[] arr = new int[n];

        System.out.println("Enter the values of the Array");
        for (int i = 0; i < n; i++) {
            m = sc.nextInt();
            arr[i] = m;
        }

        InsertionSort ob = new InsertionSort();
        ob.insertionSort(arr);

        printArray(arr);
    }

    void insertionSort(int arr[]) {
        int n = arr.length;

        for (int i = 1; i < n; ++i) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = key;
        }
    }
}
