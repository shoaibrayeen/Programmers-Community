import java.util.*;
public class Reverse
{
	public static void main(String[] args) {
		/**
		Aim: To find the reverse of the element
		*/
		Reverse obj= new Reverse();
		int num=obj.input();
		System.out.println("The reverse of the integer entered is "+obj.reverse(num));
		
	}
	int input()
	{
	    /**
	    Aim: To input element 
	    */
	    
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter the element");
	    int n=sc.nextInt();
	    return n;
	}
	int reverse(int num)
	{
	    /**
	    Aim: To find the reverse of the number
	    Input: 
	        num: an integer  to be reversed
	    Output:the reverse of the integer num
	    */
	    int rev=0;
	    
	    while(num>0)
	    {
	        rev=rev*10+num%10;
	        num=num/10;
	    }
	    return(rev);
	}
	
	
}
		
