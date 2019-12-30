import java.io.*;
import java.lang.*;
import java.util.*;

public class reverseString {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String str = scan.next();
		System.out.println(revStr(str));
	}

	private static String revStr(String str) {
		if (str.length() == 0)
			return "";
		String ans = revStr(str.substring(1));
		return ans + str.charAt(0);
	}
}
