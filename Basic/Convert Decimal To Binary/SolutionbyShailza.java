import java.util.Scanner;
public class Main {
	
	public static void main(String[] args) {
  
      Scanner s=new Scanner(System.in);
		int n=s.nextInt();
        int x;
		long bin=1,rev=0;
		
		while(n!=0) {
			x=n%2;
			bin=bin*10+x;
			n/=2;
		}
		
		while(bin!=1) {
			x=(int)(bin%10);
			rev=rev*10+x;
			bin/=10;
		}
		
		System.out.println(rev);
	}
}
