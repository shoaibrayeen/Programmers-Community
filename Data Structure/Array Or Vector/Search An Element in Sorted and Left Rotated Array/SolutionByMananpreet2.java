import java.util.Scanner;
class FindElem{
	public static int findPivot(int arr[],int n)
	{
		int pivot =n-1;
		for(int i = 1; i < n-1; i ++)
		{
			if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
			{
				pivot = i-1;
				break;
      		}
		}
		return pivot;
	}

	 public static boolean binarySearch(int arr[], int low, int high, int X)
	 {
	 	if(high<low)
	 		return false;

	 	int mid = (low+high)/2;
	 	if(X==arr[mid])
	 		return true;
	 	else if(X<arr[mid])
	 		return binarySearch(arr,0,mid-1,X);
	 	return binarySearch(arr,mid+1,high,X);
	 }
	 public static void main(String[] args) {
	 	Scanner s = new Scanner(System.in);
	 		 	int n = s.nextInt();
	 	int arr[] = new int[n];
	 	for(int i = 0; i < n; i ++)
	 	{
	 		arr[i] = s.nextInt();
	 	}
	 	int X = s.nextInt();
	 	int p = findPivot(arr,n);
	 	if(X>=arr[0])
	 	{
	 		if(binarySearch(arr,0,p,X))
	 			System.out.print("YES");
	 		else
	 			System.out.print("NO");
	 	}
	 	else
	 	{
	 		if(binarySearch(arr,p+1,n-1,X))
	 			System.out.print("YES");
	 		else
	 			System.out.print("NO");
	 	}
	 }
}
