import java.util.Scanner;
import java.lang.*;
class NumberOfSetBits4
{
	public static int count(int n)
	{
      return Integer.bitCount(n);
	}

	public static void main(String[] args)
	 {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n = s.nextInt();
		System.out.println("Number of set bits in this number are "+count(n));
	}
}
