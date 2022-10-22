import java.io.*;
import java.util.*;

class solution {
    static final FastScanner fs = new FastScanner();
    public static void main(String[] args) {

    	System.out.print("Enter a string: ");
    	String s = fs.next();
    	int len = s.length();
    	System.out.println("The length of the String \""+s+"\" is: " +len);
      }

    static class FastScanner {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer("");
        String next() {
            while (!st.hasMoreTokens())
                try {
                    st = new StringTokenizer(br.readLine());
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
