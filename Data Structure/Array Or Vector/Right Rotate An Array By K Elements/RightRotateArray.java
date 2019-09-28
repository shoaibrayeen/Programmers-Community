import java.math.BigInteger;
import java.util.Scanner;

public class RightRotateArrray {

	public static void main(String[] args) {
		int n, k, i;
		BigInteger temp; //BigInteger doesn't have any theoretical upperBound 
		
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		BigInteger a[] = new BigInteger[n];
		
		for(i = 0; i < n ; i++) {
			a[i] = sc.nextBigInteger();
		}
		k = sc.nextInt();
		sc.close();  //input ends
		int count = 0;
		while(count < k){	
			temp = a[n-1];
			
			for(i = n-2; i >= 0 ;i--) {
				a[i+1] = a[i]; //shifting elements
			}
			a[0] = temp;
			count++;
		}
		
		display(a);
	}

	private static void display(BigInteger[] a) {
		for(BigInteger i:a) {
			System.out.print(i + " ");
		}
	}
}
