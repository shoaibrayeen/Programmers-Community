package patternQues;
/*
Description:
Input:A Decimal Number as a dec
Output:Binary Number
*/
 
import java.util.Scanner;

public class SolutionByIndra {

	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		System.out.println("Enter a deciaml number:");
		int dec = in.nextInt();
		int bin = 0;

		int tenpowers = 1;

		while (dec != 0) {
			int rem = dec % 2;
			bin = bin + rem * tenpowers;
			tenpowers = tenpowers * 10;
			dec = dec / 2;
		}

		System.out.println("Binary conversion of Entered number is: " + bin);
		in.close();
	}
}