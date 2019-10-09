import java.util.Scanner;

public class PowerOf2UsingLog {
	/*
	 *	Approach = comparing the log's value with te floor value of log 
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a no. : ");
		int input = sc.nextInt();
		if(isPowerOfTwo(input))
			System.out.println("Yes");
		else
			System.out.println("No");
		sc.close();
	}

	private static boolean isPowerOfTwo(int input) {
		input = Math.abs(input);
		double logValue = Math.log(input)/Math.log(2);
		return logValue == Math.floor(logValue);
	}

}
