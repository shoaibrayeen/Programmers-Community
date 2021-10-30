import java.io.*;
import java.util.*;

public class CheckLeapYear {
	static final FastScanner fs = new FastScanner();
	static int year;

	public static void main(String[] args) {
		System.out.print("Enter a year: ");
        year = fs.nextInt();
		
        if(isLeapYear(year)) {
        	System.out.println("Yes");
        } else {
        	System.out.println("No");
        }
    }
	

    private static boolean isLeapYear(int year) {
    	if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)) {
            return true;
    	} else {
             return false;
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
