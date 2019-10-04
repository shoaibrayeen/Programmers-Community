import java.util.Scanner;

public class DecimalToBinary {
  
  /*This code  converts a decimal number to its 8 bit binary equivalent. It works for negative numbers as well*/
  
	public static int[] convertDecimalToBinary(int input) {
		
		int i;
		boolean negative = false;		//TO CHECK IF THE NUMBER IS NEGATIVE
		int[] output = new int[8];
		int len = output.length;
		for( i = 0; i < len; i++) {
			output[i] = 0;
		}
		
		//CHECK FOR NEGATIVE NO
		if(input < 0){
			negative = true;
			input = Math.abs(input);
		}
		
		i = len-1;
		
		//FIND THE BINARY EQUIVALENT
		while( input > 1) {
			output[i] = input % 2;
			i--;
			input /= 2;
		}
		output[i] = input;
		
		if(negative){
			//CHANGE ALL ELEMENTS IF 1 IS ENCOUNTERED
			boolean oneEncountered = false;
			
			for(i=len-1;i>=0;i--) {	
				if(oneEncountered){
					output[i] = output[i] == 0 ?  1 :  0;
				}
				else if(output[i] == 1){
					oneEncountered = true;
				}
			}
		}
		return output;
	}
	
	
	public static void display(int array[]){
		for(int i : array){
			System.out.print(i+" ");
		}
	}

	
	public static void main(String[] args) {
		
		int input;
		
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a Decimal Number : ");
		input = sc.nextInt();
		sc.close();
		
		System.out.print("It's Binary Equivalent(8 Bit) : "  );
		display(convertDecimalToBinary(input));
	}


}
