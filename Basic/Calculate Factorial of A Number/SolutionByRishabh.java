/*Program to calculate factorial of a number*/
import java.util.Scanner; //Importing Scanner Class
public class Factorial {
	public static void main(String args[]){
		Scanner sc = new Scanner(System.in); //Initialising object of Scanner Class
		System.out.println("Enter the number"); // Message to inform user what to do next
		int n = sc.nextInt(); //Assigning user input to variable n
		int fact =1; //Assigning 1 to fact
                //Process to calculate factorial
	for(int i=n;i>=1;i--)
		fact=fact*i;
		//Printing the result
		System.out.println(fact);
	}
}
