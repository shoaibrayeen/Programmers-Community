import java.util.*;

class EquilibriumIndex { 
	int equilibrium(int arr[], int n) { 
		int sum = 0;
		int leftsum = 0;

		/*
			Find sum of the array
		*/
		for (int i = 0; i < n; ++i) 
			sum += arr[i]; 

		for (int i = 0; i < n; ++i) { 
			sum -= arr[i];

			if (leftsum == sum) 
				return i; 

			leftsum += arr[i]; 
		} 

		return -1; 
	} 

	public static void main(String[] args) { 
		EquilibriumIndex equilibriumIndex = new EquilibriumIndex(); 
		
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

		System.out.println("First equilibrium index is " + equilibriumIndex.equilibrium(arr, n)); 
	} 
} 

