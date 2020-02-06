import java.util.Scanner;
class LCM
{
	public static int gcd(int a, int b)
	{

		int gcd=1;
		int i =1;
		int min=0;

		if(a<b)
			 min = a;
		else
			 min = b;

		while(i<=min)
		{
			if(a%i==0 && b%i==0)
				gcd=i;
			i++;
		}
		return gcd;

	}
	public static int lcm(int a, int b)
	{
		int n = gcd(a,b);
		return (a*b)/n;
	}
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter number1 :");
	    int a=s.nextInt();
	    System.out.print("Enter number2 :");
	    int b=s.nextInt();
	    System.out.println("LCM: "+lcm(a,b));
	}
}
