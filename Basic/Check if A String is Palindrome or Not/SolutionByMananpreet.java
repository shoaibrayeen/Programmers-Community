import java.util.Scanner;
/*
  The program checks if the entered string is palindrome or not.
  The function CheckPalindrome() is a single argumented function and has a boolean return type. 
  It returns true if the string entered is palindrome and false if it is not.
  */
class Palindrome
{
	public static boolean CheckPalindrome(String s)
	{
		String reverse = "";
		for(int i=(s.length()-1) ; i >= 0; i--)
		{
			reverse = reverse + s.charAt(i);
		}

		if(reverse.equals(s))
			return true;
		else
			return false;
	}
	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);

		System.out.print("Enter the string to be checked : ");
		String enteredString= s.next();

		String string= enteredString.toLowerCase();

		boolean isPalindrome = CheckPalindrome(string);

		if(isPalindrome)
		System.out.println("The entered string is Palindrome");
	
	    else
		System.out.println("The entered string is not Palindrome");
	}

}
