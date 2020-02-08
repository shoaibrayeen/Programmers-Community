import java.util.Scanner;
public class gcd {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		
		int number1 = input.nextInt();
		int number2 = input.nextInt();
		System.out.print(gcd(number1,number2));
	}

	public static int gcd(int num1, int num2){
		 
		int gcd = 1;
		int initialValue = 2;
		
		while(initialValue <= num1 && initialValue <= num2){
			if(num1 % initialValue == 0 && num2 % initialValue == 0)
				gcd = initialValue;
				initialValue++;
				
			
		}
		return gcd;
	}
}
