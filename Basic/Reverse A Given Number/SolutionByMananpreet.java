import java.util.Scanner;
class ReverseNumber
{
  public static int rev(int n)
  {
  	int rev=0;
  	while(n>0)
  	{
  		rev=rev*10+n%10;
  		n=n/10;
  	}
  	return rev;
  }
  public static void main(String[] args) {
  	Scanner s = new Scanner(System.in);
  	System.out.println("Enter a number");
  	int n =s.nextInt();
  	System.out.println("Reverse of "+n+" : "+rev(n));

  }
}
