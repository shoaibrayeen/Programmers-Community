import java.util.*; 

class CountDistinctElementsInAnArray { 
	
	public static int countDistinct(int arr[],int n) { 

		HashSet<Integer> hs = new HashSet<Integer>(); 

		for(int i = 0; i < n; i++) { 
			hs.add(arr[i]); 
		} 
		return hs.size();	 
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

		System.out.println(countDistinct(arr, arr.length)); 
	} 
} 

