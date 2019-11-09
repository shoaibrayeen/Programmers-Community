/*
   Program to find missing number in a given range using XOR of all the numbers
   a^0 = a
   a^a = 0
*/

import java.util.Scanner;

public class findMissingNumber {
	
	//function to find missing number using XOR
	public static int missingNum(int arr[]) {
		int XOR = 0;
		for(int i=0; i<arr.length; i++) {
			XOR ^= (arr[i] ^ (i+1));
		}
		return (XOR^(arr.length+1));
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("enter N");
		int N = s.nextInt();
		
		System.out.println("enter the elements");
		int arr[] = new int[N-1];
		for(int n=0; n<N-1; n++) {
			arr[n] = s.nextInt();
		}
	
		System.out.println(missingNum(arr));
	}

}
