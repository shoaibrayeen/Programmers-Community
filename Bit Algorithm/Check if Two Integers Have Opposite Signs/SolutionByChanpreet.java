import java.util.Scanner;

public class OppositeSigns {

	/*
	 *	Problem - Two numbers is given and you need to Check if they Have Opposite Signs.
	 *  Approach - Taking XOR of both elements
	 */
	
	//FUNCTION TO CHECK FOR OPPOSITE SIGNS
	private static boolean checkOppositeSign(int a, int b) {
		if( (a^b) < 0)
			return true;
		//if the nos are same or both positive/negative then the xor is positive
		return false;
	}

	//MAIN
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int a, b;
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter 2 nos. : ");
		a = sc.nextInt();
		b = sc.nextInt();
		if(checkOppositeSign(a, b)){
			System.out.println("Yes");
		}
		else{
			System.out.println("No");
		}
		sc.close();
	}

}
