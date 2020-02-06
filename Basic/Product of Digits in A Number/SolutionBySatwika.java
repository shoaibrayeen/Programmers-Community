import java.io.*;
import java.lang.*;
import java.util.*;

public class prodOfNum {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int num = scan.nextInt();
		if (num == 0) {
			System.out.println("0");
		} else {
			System.out.println(prodDigits(num));
		}
	}

	private static int prodDigits(int num) {
		if (num <= 0)
			return 1;

		int ans = prodDigits(num / 10);
		if (num % 10 == 0) {
			return 1 * ans;
		}
		return 1 * ans * (num % 10);
	}
}
