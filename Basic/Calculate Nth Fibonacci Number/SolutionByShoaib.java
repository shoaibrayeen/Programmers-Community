/*
     program to find the Nth Fibonacci number using DYNAMIC PROGRAMMING
     time complexity O(n)
 */
 import java.util.Scanner;

 public class SolutionByShoaib {

 	public static long fibDP(int n) {
 		long mod = (long)(Math.pow(10, 9)) + 7;
 		return fibDP(n, mod);
 	}

 	//helper fibDP function
 	public static long fibDP(int n, long mod) {
 		long storage[] = new long[n+1];           // array to store fibonacci of index i at index i
 		storage[0] = 0;                           //base cases
 		storage[1] = 0;                           // fib(0) = 0, fib(1) = 1
          storage[2] = 1;
  		for(int i = 3; i < n+1; i++) {
 			storage[i] = (storage[i-1] + storage[i-2]) % mod;    //storing values in an array before returning
 		}                                                      

 		return storage[n];
 	}

 	public static void main(String[] args) {
 		Scanner s = new Scanner(System.in);
 		System.out.println("enter N to find Nth fibonacci");
 		int N = s.nextInt();
 		System.out.println("The " + N + "th Fibonacci number is : " + fibDP(N));
 		s.close();
 	}

 }
