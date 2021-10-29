import java.io.*;
import java.util.*;

public class CheckPalindromeString {
	static final FastScanner fs = new FastScanner();
	static String str;

	public static void main(String[] args) {
		System.out.print("Enter a string: ");
        str = fs.next();
		
        int strLength = str.length();
        String reverseStr = "";
        
        for (int i = (strLength - 1); i >=0; --i) {
          reverseStr = reverseStr + str.charAt(i);
        }

        if (str.toLowerCase().equals(reverseStr.toLowerCase())) {
          System.out.println("YES");
          System.exit(0);
        }
        else {
          System.out.println("NO");
          System.exit(0);
        }
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
