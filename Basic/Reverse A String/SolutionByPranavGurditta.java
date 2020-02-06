import java.util.*;
public class Reverse
{
	public static void main(String[] args) {
		/**
		Aim: To find the reverse of the element
		*/
		Reverse obj= new Reverse();
		String s=obj.input();
		System.out.println("The reverse of the string entered is "+obj.reverse(s));
		
	}
	String input()
	{
	    /**
	    Aim: To input string 
	    */
	    
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter the string");
	    String s=sc.nextLine();
	    return s;
	}
	String reverse(String s)
	{
	    /**
	    Aim: To find the reverse of the string
	    Input: 
	        s: an string  to be reversed
	    Output:the reverse of the string s
	    */
	    StringBuilder rev=new StringBuilder(s);
	    for(int i=0,revIndex=s.length()-1;i<(s.length()/2);i++,revIndex--)
	    {
	        char temp=rev.charAt(i);
	        rev.setCharAt(i,s.charAt(revIndex));
	        rev.setCharAt(revIndex,temp);
	        
	    }
	    return rev.toString();
	    
	}
	
	
}
		
