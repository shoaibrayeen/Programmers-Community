import java.util.Scanner;

// Java program for implementation of Bubble Sort 
class BubbleSort {

    // Driver method to test above
    public static void main(String args[]) {
        BubbleSort ob = new BubbleSort();

        System.out.println("Enter the size of the Array");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter the values of the Array");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        ob.bubbleSort(arr);
        System.out.println("Sorted array");
        ob.printArray(arr);
    }

    void printArray(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n; ++i) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    void bubbleSort(int arr[]) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
} 
