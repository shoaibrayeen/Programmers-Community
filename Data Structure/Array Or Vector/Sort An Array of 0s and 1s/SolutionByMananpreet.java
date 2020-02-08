import java.util.Scanner;
class SortZeroesAndOnes
{
	public static int[] sort(int arr[])
	{
		int zerocount = 0;
		for(int i = 0; i < arr.length ; i++)
		{
			if(arr[i] == 0)
				zerocount++;
		}
         int i = 0;
		while(i < zerocount)
		{
			arr[i] = 0;
			i++;
		}
        
		while(i < arr.length)
		{
			arr[i] = 1;
			i++;
		}
		return arr;
	}
	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
		System.out.print("Enter length : ");
		int n = s.nextInt();

		int arr[] = new int[n];
		for(int i = 0 ; i < n ; i++)
		{
			System.out.print("Enter value "+(i+1)+": ");
			arr[i] = s.nextInt();
		}
		int sorted[] = sort(arr);
		for(int i = 0; i < n ; i++)
		{
			System.out.print(sorted[i]+" ");
		}
	}
}
