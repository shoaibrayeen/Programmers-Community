import java.util.*;
public class Second_highest
{
	public static void main(String[] args) {
		/**
		Aim: To find the second largest element in the Array 
		*/
		Second_highest obj= new Second_highest();
		int[] arr=obj.input();
		for(int i=0;i<arr.length;i++)
		{
		    System.out.println(arr[i]);
		}
		obj.second_largest(arr,arr.length);
		
	}
	int[] input()
	{
	    /**
	    Aim: To input element in the Array,each element in the ramge from 0 to 10^9+1
	    Output: Output an integer Array
	    */
	    Scanner sc=new Scanner(System.in);
	    System.out.println("Enter the size of the array");
	    int n=sc.nextInt();
	    if(n>(1000000) || n<1)
	    {
	        System.out.println("Enter the size of the array again in the range of 1 to 10^6");
	        n=sc.nextInt();
	    }
	    int[] arr=new int[n];
	    
	    System.out.println("Enter the elements of the array.");
	    for(int i=0;i<n;i++)
	    {   System.out.println("Enter the element.")
	        arr[i]=sc.nextInt();
	        if( (arr[i]>(1000000000)) || (arr[i]<0)) 
	        {
	            System.out.println("Enter the elements of the array in the range of 0 to 10^9.");
	            arr[i]=sc.nextInt();
	        }
	    }
	    return arr;
	}
	void second_largest(int[] arr, int n)
	{
	    /**
	    Aim: To find the second largest element in the array.
	    Input: 
	        arr: An integer array
	        n: size of the array
	    Output: Printing the second largest number in the array.
	    */
	    int first,second;
	    first=Integer.MIN_VALUE;
	    second=Integer.MIN_VALUE;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>first)
	        {
	             second=first;
	             first=arr[i];
	        }
	        else if(arr[i]>second && arr[i]!=first)
	        {
	            second=arr[i];
	        }
	    }
	    if(second==Integer.MIN_VALUE)
	    {
	        System.out.println("No 2nd largest element");
	        
	    }
	    else
	    {
	        System.out.println("The second largest element is "+second);
	    }
	    
	}
	
	
}
		
