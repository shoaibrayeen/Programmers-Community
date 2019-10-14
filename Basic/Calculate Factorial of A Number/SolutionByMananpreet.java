import java.util.Scanner;

class Factorial
{

	public static int calculateFac(int n)
	{
		if(n==0)
		{
			return 1;
		}

		return n* calculateFac(n-1);
	}

	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a number");
		int n =s.nextInt();
		System.out.println("factorial of "+ n +"  is: "+ calculateFac(n));
		
	}

}
