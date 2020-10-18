import java.util.Scanner;

public class sortingBinaryNums {
	public static int[] sorting(int[] arr) {
		int s = 0, e = arr.length-1;
		while(s < e) {
			if(arr[s] == 0) {
				s++;
			}else if(arr[e] == 1) {
				e--;
			}else {
				int temp = arr[s];
				arr[s] = arr[e];
				arr[e] = temp;
			}
		}
		return arr;
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the size: ");
		int n = s.nextInt();
		
		System.out.println("Enter the elements of the array");
		int arr[] = new int[n];
		for(int i=0; i<n; i++) {
			arr[i] = s.nextInt();
		}
		sorting(arr);
		for(int i=0; i<n; i++) {
			System.out.print(arr[i] + " ");
		}
		s.close();
	}
}
