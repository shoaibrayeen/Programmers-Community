/*
program to sort an array containing 0's & 1's 
    time complexity O(n) 
    space complexity O(1)
*/
import java.util.Scanner;

public class sortBinaryNumbers {
	
	//function to sort 0's & 1's
	public static int[] sort(int[]arr) {
		int s = 0, e = arr.length-1;
		while(s < e) {
			if(arr[s] == 0) {
				s++;
			}else if(arr[e] == 1) {
				e--;
			}else {
				int temp = arr[s];
				arr[s] = arr[e];
				arr[e] = temp;
			}
		}
		return arr;
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("enter size of array");
		int N = s.nextInt();
		
		System.out.println("enter elements of array");
		int []arr = new int[N];
		for(int i=0; i<N; i++) {
			arr[i] = s.nextInt();
		}
		sort(arr);
		for(int i=0; i<N; i++) {
			System.out.print(arr[i] + " ");
		}
		s.close();
	}

}
