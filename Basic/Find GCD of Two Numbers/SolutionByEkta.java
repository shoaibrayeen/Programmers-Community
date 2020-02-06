/*
   program to find the GCD of two numbers using EUCLID'S METHOD
   after every recursion call problem will reduced from GCD(P, Q) to GCD(Q, P%Q)
   if Q == 0 then P is the GCD
*/
import java.util.Scanner;

public class gcd {
	
	//Euclid's division method
	public static int euclidDivision(int p, int q) {
		if(q == 0) {
			return p;              
		}
		return euclidDivision(q, p%q);      //recursion call
	}

	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("enter the two numbers");
		int P = s.nextInt();
		int Q = s.nextInt();
		int GCD = (P > Q) ? euclidDivision(P, Q) : euclidDivision(Q, P);         //ternary operator
		System.out.println("GCD of " + P + " & " + Q + " : " + GCD);
		s.close();
	}

}
