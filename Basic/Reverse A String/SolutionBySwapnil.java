import java.util.*;

class Solution
{
	public static String reverseAString(String s)
	{
		String reversedString = "";
		for(int i = s.length()-1 ; i >= 0 ; i--)
		{
			reversedString += s.charAt(i);
		}
		return reversedString;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter the string to be reversed: ");
		String str = sc.next();
		System.out.println("The reversed string is "+ reverseAString(str));
	}
}
