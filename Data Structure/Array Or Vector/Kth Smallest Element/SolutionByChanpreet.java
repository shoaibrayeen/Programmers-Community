import java.util.Scanner;

public class KthSmallestElement {

	public static int KthSmallest(int a[],int low,int high,int k){
		
		if(k > 0 && k <= high-low+1){
	    	int partition = partition(a,low,high);
			int size = partition-low+1;
			
			if(k == size){
				return a[partition];
			}
			else if(k < size){
				return KthSmallest(a, low, partition-1, k);
			}
			else{
				return KthSmallest(a, partition+1, high, k-size);
			}
		}
		
		return Integer.MIN_VALUE;	//case of failure
	}
	
	
	//partition the array around pivot
	public static int partition(int a[],int low,int high){
		int pivot=a[high];
		int i=low,temp;
		
		for(int j = low; j <= high-1; j++){
			
			if(a[j]<=pivot){
				
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
				i++;
			}
		}
		temp=a[i];
		a[i]=a[high];
		a[high]=temp;
		
		return i;
	}
	
	
	
	
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		
		for(int i=0;i<n;i++){
			a[i]=sc.nextInt();
		}
		int k=sc.nextInt();
		sc.close(); 							//input ends
		
		System.out.println(KthSmallest(a,0,a.length-1,k));
	}

}
