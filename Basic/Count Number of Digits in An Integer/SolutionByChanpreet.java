import java.util.Scanner;

public class NoOfDigits {
/*
 * Problem-A positive number N is given to you and You need to Count Number of Digits in An Integer.
 * Approach- taking  log(base 10)+1 returns the no of digits 
 * Complexity- O(1)
 * */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a no. : ");
		int n = sc.nextInt();
		System.out.println("The No. of digits are: "+countDigits(n));
		sc.close();
	}

	private static int countDigits(int n) {
		// TODO Auto-generated method stub
		return (int) ( Math.floor(Math.log10(n) ) +1 );
	}

}
