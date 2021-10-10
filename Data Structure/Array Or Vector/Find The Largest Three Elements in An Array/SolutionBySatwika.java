import java.io.*;
import java.util.*;

public class largest3num_Array {

    public static void largest3num(int[] arr, int size) {
        PriorityQueue<Integer> pq = new PriorityQueue<>(Collections.reverseOrder()); //using max heap
        int k = 3;
        for (int i = 0; i < size; i++) {
            pq.add(arr[i]);
        }
        while (k > 0) {
            System.out.print(pq.remove() + " ");
            k--;
        }
    }

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner s = new Scanner(System.in);
        int size = s.nextInt();
        int arr[] = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = s.nextInt();
        }
        largest3num(arr, size);
    }

}
