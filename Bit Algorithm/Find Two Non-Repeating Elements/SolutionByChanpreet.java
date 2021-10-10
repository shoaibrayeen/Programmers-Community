import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class FindNonRepeatedElementUsingHsshSet {
	/*
	  	Problem	- An Array is given and every element is appearing twice except two elements. You need to find those two elements.
	  	Approach - Using HashMap to store the no. of occurrences of every no.
	 */

    private static void NonRepeatedElements(int[] array, int size) {
        Map<Integer, Integer> hm = new HashMap<>();
        for (int i = 0; i < size; i++) {
            if (!hm.containsKey(array[i]))
                hm.put(array[i], 1);
            else
                hm.put(array[i], hm.get(array[i]) + 1);
        }
        display(hm);
    }

    private static void display(Map<Integer, Integer> hm) {
        for (Map.Entry<Integer, Integer> m : hm.entrySet()) {
            if ((int) m.getValue() == 1) {
                System.out.print(m.getKey());
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Size : ");
        int size = sc.nextInt();
        int array[] = new int[size];
        System.out.print("Enter the array:");
        for (int i = 0; i < size; i++)
            array[i] = sc.nextInt();
        NonRepeatedElements(array, size);
        sc.close();
    }
}
