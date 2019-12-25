import java.util.Scanner;
import java.util.regex.Pattern;

public class DigitString {
	
	/*
	 * Problem -A String is given. You need to check if it contains only digits.
	 * Approach - regular expressions
	 */
	
	
	public static boolean containsDigits(String str) {
		String regex = "\\d*";
		return Pattern.matches(regex, str);
	}

	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter a string : ");
		String str = sc.nextLine();
		
		if( containsDigits(str) )
			System.out.println("YES");
		else
			System.out.println("NO");
		
		sc.close();
	}
}
