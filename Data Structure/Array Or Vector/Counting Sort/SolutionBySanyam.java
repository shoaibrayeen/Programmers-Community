import java.util.*;

// Java program for implementation of Counting Sort 
class CountingSort { 

	static void printArray(int[] arr) { 
		for (int i = 0; i < arr.length; i++) { 
			System.out.print(arr[i] + " "); 
		} 
		System.out.println(""); 
	} 

	static void countSort(int[] arr) { 
		
		int max = Arrays.stream(arr).max().getAsInt(); 
		int min = Arrays.stream(arr).min().getAsInt(); 
		int range = max - min + 1; 
		int count[] = new int[range]; 
		int output[] = new int[arr.length]; 
		
		for (int i = 0; i < arr.length; i++) { 
			count[arr[i] - min]++; 
		} 

		for (int i = 1; i < count.length; i++) { 
			count[i] += count[i - 1]; 
		} 

		for (int i = arr.length - 1; i >= 0; i--) { 
			output[count[arr[i] - min] - 1] = arr[i]; 
			count[arr[i] - min]--; 
		} 

		for (int i = 0; i < arr.length; i++) { 
			arr[i] = output[i]; 
		} 
	} 

	public static void main(String[] args) { 

		System.out.println("Enter the size of the Array");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m;

		int [] arr = new int[n];

		System.out.println("Enter the values of the Array");
		for (int i = 0; i < n; i++) {
			m = sc.nextInt();
			arr[i] = m;
		}

		countSort(arr); 
		printArray(arr); 
	} 
} 
