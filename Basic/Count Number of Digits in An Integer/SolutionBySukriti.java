
import java.util.*;
public class SolutionBySukriti {
	public static long countDigitsbyRecursion(long n){
		if(n<=9)
			return 1;
		else
			return 1+countDigitsbyRecursion(n/10);
	}
  public static void main(String[] args) {
	Scanner s =new Scanner(System.in);
	System.out.println("Input number: ");
	long input=s.nextLong();
	System.out.println("The no of digits in "+input+" is "+countDigitsbyRecursion(input));
}
}
