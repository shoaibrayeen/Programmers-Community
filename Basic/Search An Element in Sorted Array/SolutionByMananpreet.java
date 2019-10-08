
/*
The following program returns the position of the number to be searched from the array
*/
import java.util.Scanner;

class SearchFromSorted
{
	public static int search(int a[], int start, int end, int elem)
	{
		if(end<start)
			return -1;

		int mid = (start+end)/2;

		if(elem == a[mid])
			return mid;

		if(elem < a[mid])
			return search(a, start, mid, elem);

		return search(a, mid+1, end, elem);
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

		int index = search(a, start, end, elem);
		int position = index+1;
		
		System.out.println("The number lies at "+position+"th position");
		
}
}
