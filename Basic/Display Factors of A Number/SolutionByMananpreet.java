import java.util.Scanner;
import java.lang.*;
class Factors
{
	public static String fac(int n )
	{
		String ans ="1";
		for(int i = 2; i <= n; i++)
		{
			if(n%i==0)
				ans = ans+", "+i;
		}
		return ans;
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("Enter a number");
		int n = s.nextInt();
		System.out.println("The factors of this number are:" +fac(Math.abs(n)));
        
	}
}
