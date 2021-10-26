import java.util.*;

public class Solution {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int arr[] = new int[n];
		
		for(int i = 0 ; i<n ; i++){
			arr[i] = sc.nextInt();
		}								

		int[] op = countSort(arr);
		print(op);
	}

	
	private static int[] countSort(int[] arr) {
		int count[] = new int[3]; 
		int output[] = new int[arr.length];
        Arrays.fill(count, 0);
		
		for(int val : arr) {		
		    count[val]++;
		}
		
		for(int i = 1; i < count.length ; i++){
			count[i] += count[i-1];
		}
		
		for(int i = arr.length-1; i >= 0 ; i--){
			output[count[arr[i]] -1] = arr[i];
			--count[arr[i]];
		}
		return output;
	}
	
	
	private static void print(int[] arr) {
		for(int val : arr){
			System.out.print(val+" ");
		}
	}
}
