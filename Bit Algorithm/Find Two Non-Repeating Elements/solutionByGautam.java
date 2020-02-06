import java.util.*;

public class solutionByGautam {
	static void printNonRepeating(int arr[], int size)  
    { 
        int i, j; 
        Arrays.sort(arr);
        System.out.println("Non Repeated Elements are :"); 
        for (i = 1; i <size; i++)  
        { 
        	if(i==size-1) {
        		if(arr[i] != arr[i-1]) {
        			System.out.println(arr[i]);
        		}
        	}
        	else if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
        		System.out.println(arr[i]);
        	}
        } 
    } 
  
    public static void main(String[] args)  
    { 
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();
        int[] arr = new int[size];
        for(int i=0;i<size;i++) {
        	arr[i] = scan.nextInt();
        }
        printNonRepeating(arr,size);
    }
} 