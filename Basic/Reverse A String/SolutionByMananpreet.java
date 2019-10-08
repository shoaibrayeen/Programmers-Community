/*
The following program returns a reversed string for the entered string.
*/
import java.util.Scanner;

class Reverse
{
	public static String reverseString(String s)
	{
		String reverse = "";
		for(int i= s.length()-1 ; i >=0 ; i--)
		{
			reverse = reverse + s.charAt(i);
		}
		return reverse;
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		System.out.print("Enter the string to be reversed: ");
		String string = s.next();
		System.out.println("The reversed string is "+ reverseString(string));
	}
}
