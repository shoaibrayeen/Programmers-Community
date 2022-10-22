package hacktoberfest2022;

import java.io.*;
import java.util.*;

class KthElementofTwoSortedArrays {
    static final FastScanner fs = new FastScanner();
    static Scanner s = new Scanner(System.in);

    public static void main(String[] args) {
    	solve();
    }

    public static void solve() {
        //take in inputs
        String input1 = s.nextLine();
        String input2 = s.nextLine();
        String inputK = s.nextLine();
        
        //cleanse inputs
        int[] arr1 = cleanseInputs(input1);
        int[] arr2 = cleanseInputs(input2);
        inputK = inputK.substring(inputK.indexOf("=") + 2);
        int k = Integer.parseInt(inputK);
        
        //Combine Arrays
        int[] arr = new int[arr1.length + arr2.length];
        System.arraycopy(arr1, 0, arr, 0, arr1.length);
        System.arraycopy(arr2, 0, arr, arr1.length, arr2.length);
        
        //Sort array
        ruffleSort(arr);
        System.out.println(arr[k-1]);
 
    }
    
    public static int[] cleanseInputs(String input) {
    	input = input.substring(input.indexOf("-") + 2);
    	
    	String[] tokens = input.split(" ");
    	
    	int[] returnArr = new int[tokens.length];
    	
    	int i = 0;
    	for (String token : tokens){
    		returnArr[i++] = Integer.parseInt(token); 
    	}
    	
		return returnArr;
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
