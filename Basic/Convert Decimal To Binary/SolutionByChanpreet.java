import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class DecimalToBinary {
	/*
	 Description - Write a program to convert a decimal number into a binary number. 
	 */

    public static List<Integer> convertDecimalToBinary(int input) {
        int i;
        //TO CHECK IF THE NUMBER IS NEGATIVE
        boolean negative = false;
        List<Integer> output = new ArrayList<>();
        //CHECK FOR NEGATIVE NO
        if (input < 0) {
            negative = true;
            input = Math.abs(input);
        }
        //FIND THE BINARY EQUIVALENT
        while (input > 1) {
            output.add(0, input % 2);
            input /= 2;
        }
        output.add(0, input);
        //INPUT IS NEGATIVE
        if (negative) {
            //CHANGE ALL ELEMENTS IF 1 IS ENCOUNTERED
            for (i = output.lastIndexOf(1) - 1; i >= 0; i--) {
                if (output.get(i) == 1)
                    output.set(i, 0);
                else
                    output.set(i, 1);
            }
        }
        return output;
    }

    public static void display(List<Integer> array) {
        for (int i : array) {
            System.out.print(i);
        }
    }

    public static void main(String[] args) {
        int input;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a Decimal Number : ");
        input = sc.nextInt();
        sc.close();
        System.out.print("It's Binary Equivalent : ");
        display(convertDecimalToBinary(input));
    }

}

