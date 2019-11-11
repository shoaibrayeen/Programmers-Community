/*
  program to find the length of longest common subsequence of two strings using DYNAMIC PROGRAMMING
  time complexity O(n^2) 
*/
import java.util.Scanner;

public class LCSUsingDP {

	public static int LCS(String s1, String s2) {
		//2D array to store length of common subsequence till [i][j] in bottom-up approach
		int storage[][] = new int[s1.length()+1][s2.length()+1];            
			
		for (int i=0; i<=s1.length(); i++){ 
			for (int j=0; j<=s2.length(); j++){ 
	  	  		if (i == 0 || j == 0){ 
	    				storage[i][j] = 0;
	    			}else if(s1.charAt(i-1) == s2.charAt(j-1)){
	    				storage[i][j] = storage[i-1][j-1] + 1; 
	    			}else{
	    				storage[i][j] = (storage[i-1][j] > storage[i][j-1]) ? storage[i-1][j] : storage[i][j-1];
	    			}
	    		}
	    	}
	   	 //returning the highest length of common subsequence
	   	 return storage[s1.length()][s2.length()];     
	}
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("enter 1st string");
		String s1 = s.nextLine();
		System.out.println("enter 2nd string");
		String s2 = s.nextLine();
		System.out.println("Length of longest common subsequence is : " + LCS(s1, s2));
		s.close();
	}

}
