import java.util.Scanner;
class SearchFromSortedArray
{
  private static int search(int arr[], int x, int start, int end)
  {
  	int mid = (start+end)/2;

  	int a = 0;

  	if(x>arr[mid])
  	     a = search(arr,x,mid+1,end);

  	else if(x<arr[mid])
  		a = search(arr,x,start,mid);

  	else if(x==arr[mid])
  		a = mid;

  	return a;

  }

  public static void main(String[] args)
   {

  	Scanner s = new Scanner(System.in);

  	System.out.print("Enter the size of the array");
  	int n =s.nextInt();

  	int arr[] = new int[n];

  	for(int i = 0; i < n; i++)
  	{
  		System.out.print("Enter arr["+(i+1)+"]:");
  		arr[i]=s.nextInt();
  	}

  	System.out.print("Enter the element you want to search: ");
  	int x = s.nextInt();

  	int index = search(arr,x,0,n-1);
  	
  	System.out.print("The element is found at position "+(index+1));
  }
}
