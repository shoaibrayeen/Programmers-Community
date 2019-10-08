
/*
The following program converts an entered decimal number into binary and returns the answer as a string*/

import java.util.Scanner;

class DecimalToBinary
{
	public static String decimalToBinary(int n)
	{
		String binary = "";
		while(n>0)
		{
			binary = "" + n%2 + binary;
			n = n / 2;
		}
		return binary;
	}

	public static void main(String[] args) {
  
		Scanner s = new Scanner(System.in);
    
		System.out.print("Enter a decimal number: ");
        int n = s.nextInt();
        
        System.out.println("The binary conversion of the inputed decimal number "+n+" is : "+ decimalToBinary(n));
	}
}
