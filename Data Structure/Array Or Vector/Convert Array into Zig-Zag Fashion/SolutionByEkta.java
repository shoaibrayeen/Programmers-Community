/*
  program  to rearrange an array in a ZigZag fashion
  time complexity O(n)
*/
import java.util.Scanner;

public class arrangeZigZag {
	//function to rearrange in ZigZag fashion
	public static int[] ZigZag(int arr[]) {
		boolean shouldBeLarger = true;
		
		for(int i=1; i<arr.length; i++) {
			if(shouldBeLarger) {	//if the element at i should be LARGER than element at i-1
				if(arr[i] < arr[i-1]) {
					int temp = arr[i];
					arr[i] = arr[i-1];
					arr[i-1] = temp;
				}
				shouldBeLarger = false;
			}else {                  //if the element at i should be SMALLER than element at i-1
				if(arr[i] > arr[i-1]) {
					int temp = arr[i];
					arr[i] = arr[i-1];
					arr[i-1] = temp;
				}
				shouldBeLarger = true;
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
		ZigZag(arr);
		for(int i=0; i<N; i++) {
			System.out.print(arr[i] + " ");
		}
		s.close();
	}

}
