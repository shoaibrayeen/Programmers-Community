import java.util.Random;
import java.util.Scanner;

public class KthSmallestElement {
	
	/*
    This program implements the Randomized Select algorithm to find kth smallest element in an array 
    Approach: Partual implementation of QuickSort --> RandomisedSelect
    Time Complexity: O(n)
	*/

	//FUNCTION TO FIND Kth SMALLEST
	public static int KthSmallest(int a[],int low,int high,int k){
		
		if(k > 0 && k <= high-low+1){
	    	int partition = randomPartition(a,low,high);
			int size = partition-low+1;
			
			//Check if it's the required answer
			if(k == size)
				return a[partition];
			
			else if(k < size)
				return KthSmallest(a, low, partition-1, k);
			
			else
				return KthSmallest(a, partition+1, high, k-size);
		}
		//Case of failure
		return Integer.MIN_VALUE;	
	}
	
	
	//TO GENERATE RANDOM NO. AND SWAP WITH LAST ELEMENT OF ARRAY	
	private static int randomPartition(int[] arr, int low, int high) {
		int size = high - low +1;
		int random = (int)(Math.random()) * (size-1);
		swap(arr, low+random, high);
		return partition(arr, low, high);
	}



	//PARTITION THE ARRAY AROUND PIVOT
	public static int partition(int arr[],int low,int high){		
		//Taking last element of array as pivot
		int pivot = arr[high];
		int i = low;
		
		for(int j = low; j <= high-1; j++){
			
			if(arr[j] <= pivot){
				//SWAP arr[i] and arr[j]
				swap(arr, i, j);
				i++;
			}
		}
		swap(arr, i, high);
		return i;
	}


	public static void RandomSwap(int[] arr, int low, int high) {
	
		Random random = new Random();
		int i = random.nextInt(high-low) + low;
		swap(arr,i,high);
	}



	//UTILITY FUNCTION TO SWAP
	public static void swap(int[] arr, int i, int j) {
		int temp;
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
	
	//MAIN METHOD
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.print("Enter Size of Array: ");
		int n = sc.nextInt();
		
		System.out.print("Enter the Array: ");
		int arr[] = new int[n];
		for(int i = 0;i < n; i++)
			arr[i] = sc.nextInt();
		
		System.out.print("Enter Value of K : ");
		int k = sc.nextInt();
		
		//Input ends
		sc.close(); 							
		
		int answer = KthSmallest(arr,0,arr.length-1,k);
		if(answer == Integer.MIN_VALUE)
			System.out.println("Invalid Input!!");
		else
			System.out.println("Kth smallest element is : "+answer);
	}

}
