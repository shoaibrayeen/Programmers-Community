import java.util.*;

public class Solution {

	private static int findNonRepeatedElement(int[] array, int size) {
		
		int xor = array[0];
		for(int i = 1; i < size; i++ ) {
			xor ^= array[i];
		}
		return xor;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Size : ");
		int size = sc.nextInt();
		int array[] = new int[size];
		System.out.print("Enter the array : ");
		for(int i = 0; i < size; i++ ) {
			array[i] = sc.nextInt();
        }
		System.out.println("Non Repeating Element :"+ findNonRepeatedElement(array, size));		
	}	
}
