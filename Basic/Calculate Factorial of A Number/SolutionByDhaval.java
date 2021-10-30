import java.io.*;
import java.util.*;

public class CaclulateFactorialOfNumber {
	static final FastScanner fs = new FastScanner();
	static int n;

	public static void main(String[] args) {
		System.out.print("Enter a number: ");
        n = fs.nextInt();
		 if (n < 0) {
	            System.out.println("You can only use the factorial function for positive numbers");
	            System.exit(0);
		 } else {
	            System.out.println("Factorial is: " + factorial(n));
	            System.exit(0);
		 }
    }
	

    private static int factorial(int n) {
        if (n == 0)
            return 1;
        return n * factorial(n - 1);
    }
    
	static class FastScanner {
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st=new StringTokenizer("");
		String next() {
			while (!st.hasMoreTokens())
				try { 
                    st=new StringTokenizer(br.readLine());				               
			} catch (IOException e) {}
			return st.nextToken();
		}
		
		int nextInt() {
			return Integer.parseInt(next());
		}
		long nextLong() {
			return Long.parseLong(next());
		}
	}
}
