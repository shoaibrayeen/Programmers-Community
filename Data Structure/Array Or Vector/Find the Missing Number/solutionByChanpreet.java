import java.util.Scanner;

public class FindMissingElementInArray {
	public static void main(String[] args) {
		int n;
		
		Scanner sc = new Scanner(System.in);
		size = sc.nextInt();
		int a[] = new int[size];
		int i;
		for(i = 0; i < size; i++) {
			a[i] = sc.nextInt();
		}
		sc.close(); //input ends
		
		int sum = ( ( size + 1) * (size + 2) ) / 2; //finding sum of n elements because one of them is missing
		
		for( i = 0; i < size;i++) {
			sum-=a[i];
		}
		System.out.println(sum);
	}

}
