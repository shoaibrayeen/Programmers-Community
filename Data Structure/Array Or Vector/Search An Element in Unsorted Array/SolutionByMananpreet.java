
/*
The following program returns the position of the number to be searched from the array
*/
import java.util.Scanner;

class SearchFromUnsorted
{
	public static String search(int a[], int start, int end, int elem)
	{
		if(end<start)
			return "NO";

		for(int i =0; i <end; i++)
		{
			if(elem == a[i])
				return "YES";
		}
		return "NO";
	}

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);

		System.out.print("Enter the number of elements of the array :");
		int size=s.nextInt();

		int a[] = new int[size];

		for(int i=0;i<size;i++)
		{
			int j =i+1;
			System.out.print("Enter " +j+ "th element : ");
			a[i]=s.nextInt();
		}

		int start = 0;
		int end = size-1;

		System.out.print("Enter the number to be searched :");
		int elem = s.nextInt();

		System.out.println(search(a, start, end, elem));
		
		
		
}
}
