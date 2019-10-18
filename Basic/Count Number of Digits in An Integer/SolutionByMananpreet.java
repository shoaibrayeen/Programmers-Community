import java.util.Scanner;
class NumberOfDigits
{
	public static int count(int n )
	{
		int count = 0;
		int num = n;
		while( n > 0 )
		{
			n = n / 10;
			count++;
        }
        return count;
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = s.nextInt();
		System.out.println("The number of digits in "+n+" are : "+ count(n));
	}
}
