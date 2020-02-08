import java.util.Scanner;
class NumberOfSetBits3
{
	public static int count(int n)
	{
		int count =0;
		while(n>0)
		{
			n = n & (n-1); //toggling approach. 
			count++;
		}
		return count;
	}
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter a number : ");
		int n =s.nextInt();
		System.out.println("Number of set bits in "+n+":"+count(n));
	}
}
