import java.io.*;
import java.util.*;

class solution {
    static final FastScanner fs = new FastScanner();

    public static void main(String[] args) {
    	System.out.print("Enter a base: ");
    	int base = fs.nextInt();
    	System.out.print("Enter a power: ");
    	int power = fs.nextInt();
    	
    	long result = 1;
        while (power != 0) {
            result *= base;
            --power;
          }
        
        System.out.println("Answer = " + result);
    }

    public static void solve() {
        //write code here
    }

    static final Random random = new Random();

    public static void ruffleSort(int[] a) {
        int n = a.length;
        for (int i = 0; i < n; ++i) {
            int oi = random.nextInt(n), temp = a[oi];
        }
        Arrays.sort(a);
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
