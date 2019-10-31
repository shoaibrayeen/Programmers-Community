import java.util.Scanner;
class SearchFromSortedArray
{
  private static int search(int arr[], int x, int start, int end)
  {
  	int mid = (start+end)/2;
  	
     if(end<start)
      return -1;

     if(x==arr[mid])
      return mid;

  	else if(x>arr[mid])
  	      return search(arr,x,mid+1,end);

  	
  		return search(arr,x,start,mid);
  }
  public static void main(String[] args)
   {

  	Scanner s = new Scanner(System.in);

  	System.out.print("Enter the size of the array: ");
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

     if(index==-1)
      System.out.print("element not found");
    else
  	  System.out.print("The element is found at position "+(index+1));
  }
}
