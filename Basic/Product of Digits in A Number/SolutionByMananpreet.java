import java.util.Scanner;
class ProductOfDigits
{
	private static int product(int n)
	{
	  int product = 1;
		while(n>0)
		{
			if ( n%10 != 0 ) {
 			    product = product * (n%10);
 		    	}
			n = n / 10;
		}
		return product;
	}

	public static void main(String[] args)
	 {
	  Scanner s = new Scanner(System.in);

	  System.out.println("Enter a number :");

	  int n = s.nextInt();

	  System.out.print("The product of the digits of the entered number is: "+product(n));	
	}
}
