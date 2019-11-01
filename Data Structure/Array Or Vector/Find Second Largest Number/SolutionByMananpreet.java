import java.util.Scanner;
class SecondLargestElement
{
	public static int secondLargest(int arr[])
	{
		int highest = Integer.MIN_VALUE;
		int secondhighest = Integer.MIN_VALUE;

		for(int i = 0 ; i < arr.length ; i++)
		{
			if(arr[i] > highest)
			{
				secondhighest = highest;
				highest = arr[i];
			}
			if(arr[i] > secondhighest && arr[i] < highest)
			{
				secondhighest = arr[i];
			}
		}
		return secondhighest;
	}
	public static void main(String[] args)
	 {
		Scanner s = new Scanner(System.in);
		System.out.print("Enter length of the array: ");
         int n = s.nextInt();
         
         int arr[] = new int[n];
         for(int i = 0; i < n; i++)
         {
         	System.out.print("Enter value "+(i+1)+": ");
			    arr[i] = s.nextInt();
		      }
          
		System.out.print("The second largest element in the inputted array is: "+secondLargest(arr));
	}
}
