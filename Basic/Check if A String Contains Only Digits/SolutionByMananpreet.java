import java.util.Scanner;
class StringNumeric
{
	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter the desired string");
		
		if(s.hasNextInt())
			System.out.print("The entered string consists of only integers.");
		else
			System.out.print("The entered string consists of either no integers or is alphanumeric");
	}
}
