 import java.lang.*; 
import java.io.*; 
import java.util.*;  
class SolutionByVyomChandra
{ 
	public static void main(String[] args) 
	{ 
                Scanner sc=new Scanner(System.in);
		System.out.print("Enter String: ");
		String input =sc.next();
		char[] temparray = input.toCharArray(); 
                int left, right=0; 
                right = temparray.length-1; 
                for (left=0; left < right ; left++ ,right--) 
                { 
                 // Swap values of left and right 
                 char temp = temparray[left]; 
                 temparray[left] = temparray[right]; 
                 temparray[right]=temp; 
                 } 
                for (char c : temparray) 
                   System.out.print(c);
	} 
} 
