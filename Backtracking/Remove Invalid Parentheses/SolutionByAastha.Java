/*
Problem Statement:
You are given a string, which represents an expression having only opening and closing parenthesis. You have to remove minimum number of parenthesis to make the given expression valid. If there are multiple answers, you have to print all of them.

Sample Input:
()())()

Sample Output:
(())()
()()()
*/

import java.io.*;
import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		solution(str, getMin(str),new HashSet<>());
	}

	public static void solution(String str, int minRemoval, HashSet<String> ans) {
		if (IsValid(str) == true) {
				if(!ans.contains(str)) {
					System.out.println(str);
					ans.add(str);
				}
			return;
		}

		if (minRemoval == 0) {
			return;
		}

		for (int i = 0; i < str.length(); i++) {
			String left = str.substring(0, i);
			String right = str.substring(i + 1);
			solution(left + right, minRemoval - 1,ans);
		}
	}

	public static int getMin(String str) {
		Stack<Character> st = new Stack<>();
		for(int i = 0; i < str.length(); i++) {
			char ch = str.charAt(i);
			if(ch == '(') {
				st.push(ch);
			}else {
				if(st.size() == 0 || st.peek() == ')') {
					st.push(ch);
				}else if(st.peek() == '(') {
					st.pop();
				}
			}
		}
		return st.size();
	}

	private static boolean IsValid(String str) {
		int count = 0;
		for(int i = 0 ; i < str.length(); i++) {
			char ch = str.charAt(i);
			if(ch == '(') {
				count++;
			}else if(ch == ')') {
				count--;
				if(count < 0) {
					return false;
				}
			}
		}
		return count == 0;
	}
}
