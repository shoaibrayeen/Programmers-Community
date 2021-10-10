/*
Problem Statement:
You are given a string of length n. You have to partition the given string in such a way that every partition is a palindrome.

Sample Input:
pep

Sample Output:
(p) (e) (p) 
(pep) 
*/
import java.io.*;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.nextLine();
		solution(str, "");
	}
	
	public static void solution(String str, String asf) {
		if(str.length() == 0) {
			System.out.println(asf);
			return;
		}
		for(int i = 0; i < str.length() ;i++) {
			String fh = str.substring(0,i + 1);
			String ros = str.substring(i + 1);
			if(isPalindrome(fh)) {
				solution(ros,asf + "(" + fh + ") ");
			}
		}
	}
	
	public static boolean isPalindrome(String str) {
		int i =  0 , j = str.length() - 1;
		while(i < j) {
			char ith = str.charAt(i);
			char jth = str.charAt(j);
			if(ith != jth) {
				return false;
			}
			i++;
			j--;
		}
		return true;
	}
}
