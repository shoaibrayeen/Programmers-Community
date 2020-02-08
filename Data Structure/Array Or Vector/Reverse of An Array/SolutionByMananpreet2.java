import java.util.Scanner;
class ReverseArray2
{
	public static int[] reverse(int arr[])
	{
		int arr1[] = reverse(arr, 0, arr.length-1);
		return arr1;
	}

	private static int[] reverse(int arr[], int S, int E)
	{
		int temp = 0;
		while(S<E)
		{
		    temp = arr[S];
		    arr[S] = arr[E];
		    arr[E] = temp;	
			S++;
			E--;
		}
		return arr;
	}

	public static void main(String[] args) 
	{
		Scanner s = new Scanner(System.in);
    
		System.out.print("Enter the size of the array you want to enter: ");
		int size = s.nextInt();
    
		int arr[] = new int[size];
    
		for(int i = 0; i < size; i++)
		{
			System.out.print("Enter value "+(i+1)+": ");
			arr[i] = s.nextInt();
		}

		int arr2[] = reverse(arr);
		for(int i = 0; i < size; i++)
		{
			System.out.print(arr2[i]+" ");
		}
	}
}
