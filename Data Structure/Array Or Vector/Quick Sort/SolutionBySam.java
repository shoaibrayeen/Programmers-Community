import java.util.Scanner;

// QuickSort implementation in Java
class QuickSort { 

	static void printArray(int arr[]) { 
		int n = arr.length; 
		for (int i=0; i<n; ++i) 
			System.out.print(arr[i]+" "); 
		System.out.println(); 
	} 
	
	int partition(int arr[], int low, int high) { 
		int pivot = arr[high]; 
		int i = (low-1);
		
		for (int j=low; j<high; j++) { 

			if (arr[j] < pivot) { 
				i++; 
				int temp = arr[i]; 
				arr[i] = arr[j]; 
				arr[j] = temp; 
			} 
		} 

		int temp = arr[i+1]; 
		arr[i+1] = arr[high]; 
		arr[high] = temp; 

		return i+1; 
	} 

	void sort(int arr[], int low, int high) { 
		if (low < high) { 

			int pi = partition(arr, low, high); 

			sort(arr, low, pi-1); 
			sort(arr, pi+1, high); 
		} 
	} 

	// Driver program 
	public static void main(String args[]) {
		
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

		QuickSort ob = new QuickSort(); 
		ob.sort(arr, 0, n-1); 

		System.out.println("sorted array"); 
		printArray(arr); 
	} 
}
