import java.util.PriorityQueue;
import java.util.Random;
import java.util.Scanner;
public class Main {
    private static void println(String str) {
        System.out.println(str);
    }
    private static void print(String str) {
        System.out.print(str);
    }
    
    public static int findKthSmallestElement(int[] array, int k) {
        PriorityQueue priorityQueue = new PriorityQueue();
        for (int i = 0; i < array.length; i++) { priorityQueue.offer(array[i]); } println("Final priority-queue " + priorityQueue); int currentNo = 0; while (k > 0) {
            currentNo = priorityQueue.poll();
            k--;
        }
        return currentNo;
    }
    
    private static void printArray(int[] arr) {
        for (int i = 0; i < arr.length; i++) {
            print(arr[i] + " ");
        }
    }
    public static void main(String args[]) {
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        println("Number of Array Elements: ");
        int total_num = scanner.nextInt();
        int[] num_array = new int[total_num];
        for (int i = 0; i < total_num; i++)
            num_array[i] = Math.abs(random.nextInt(10000));
        println("New Random array : ");
        printArray(num_array);
        println("");
        println("Enter value of k : ");
        int k = scanner.nextInt();
        System.out.println("Smallest element for k = " + k + " : "
                + findKthSmallestElement(num_array, k));
    }
}
