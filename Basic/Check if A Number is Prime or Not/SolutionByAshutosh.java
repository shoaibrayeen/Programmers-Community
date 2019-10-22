import java.util.Scanner; //import Scanner Class for user input

public class PrimeNumber {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in); //Creating object of the Scanner Class
		System.out.println("Enter a number greater than 2"); //Printing the Message to guide user what to do
		int a = sc.nextInt(); //Assigninng user input to a variable
		int flag=0; //Assigning 0 to temporary variable
    //Process to calculate the Prime Number
		for(int i=2;i<=a/2;i++)
		{
			if(a%i==0){
				flag=1;
				break;
			}
		}
		if(flag==1) //Comparing if flag is equal to 1 or not
			System.out.println("Output = No");
		else
			System.out.println("Output = Yes");

	}

}
