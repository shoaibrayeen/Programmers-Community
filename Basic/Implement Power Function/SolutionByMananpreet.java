
/*
The following program calculates and returns the power of an entered base number using recursion
*/
import java.util.Scanner;

class Power
{
	public static int power(int base, int power)
	{
		if(power == 0)
		{
			return 1;
		}

		return (power(base, power -1) * base);
	}

	public static void main(String[] args)
	 {
		Scanner s = new Scanner(System.in);

		System.out.print("Enter the base number: ");
		int base = s.nextInt();

		System.out.print("Enter the exponent: ");
		int power = s.nextInt();

		int answer= power(base, power);
		
		System.out.println("The solution to "+base+"^"+power+": "+answer);
	}
}
