import java.util.*;

public class IsPowerOfTwo{
	
	public static boolean isPowerOfTwo(int n) {
		
		if(n==0) {
			return false;
		}
		while(n != 1) {
			if(n%2 != 0)
				return false;
			n = n/2;
		}
		return true;
	}
	
	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		int number = scan.nextInt();
		if(isPowerOfTwo(number)) {
			System.out.println("Yes");
		}
		else {
			System.out.println("No");
		}
	}
}
