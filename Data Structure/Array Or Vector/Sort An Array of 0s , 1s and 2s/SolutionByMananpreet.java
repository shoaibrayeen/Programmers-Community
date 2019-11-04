import java.util.Scanner;
class SortZeroesOnesAndTwos
{
	private static int[] sort(int arr[])
	{
		int zerocount = 0;
		int onecount = 0;
		int twocount = 0;

		for(int i = 0; i < arr.length; i++)
		{
			if(arr[i]==0)
				zerocount++;
			else if(arr[i]==1)
				onecount++;
			else 
				twocount++;
		}
        int i =0;
		while(i<zerocount)
		{
			arr[i] = 0;
			i++;
		}
		int j = 0;
		while(j < onecount)
		{
			arr[i+j] = 1;
			j++;
		}
		int k = 0;
		while(k < twocount)
		{
			arr[i+j+k] = 2;
			k++;
		}
       return arr;
	}
	public static void main(String[] args)
	 {
	 	Scanner s = new Scanner(System.in);
    
	 	System.out.print("Enter the length: ");
	 	int n = s.nextInt();
    
	 	int arr[] = new int[n];
	 	for(int i = 0; i < n; i++)
	 	{
	 		System.out.print("Enter value "+(i+1)+": ");
	 		arr[i] = s.nextInt();
	 	}
    
		int sortedarr[] = sort(arr);
    
		for(int i = 0 ; i < n ; i++)
		{
			System.out.print(sortedarr[i]+" ");
		}
	}
}
