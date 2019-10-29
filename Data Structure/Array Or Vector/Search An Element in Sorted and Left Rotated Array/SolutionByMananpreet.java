import java.util.Scanner;
class FindInSortedAndRotated
{
	public static String find(int arr[], int x)
	{    
		String answer = "";
		int index = pivotIndex(arr);
		 
		if(x>arr[0])//0,i
			answer = search(arr, index+1,arr.length-1, x);        // 2 1 5 4 3
		else//i+1, arr.length-1
			answer = search(arr, 0, index, x);

			return answer;
		}

		public static int pivotIndex(int arr[])
		{
			int i =0;
			int index = -1;
			while( i < arr.length && index == -1)
		  {
			if(arr[i]< arr[i+1])
				index = i;
			  else
			  i++;  
		  }
		//  System.out.print(index);
		  return index;
		}

	public static String search(int a[], int start, int end, int elem)
	{
		boolean flag = false;
		for(int i = start; i <= end ; i++)
		{
			if(a[i]==elem)
              flag = true;
		}

		if(flag == true)
			return "YES";
		else
			return "NO";
	}

	public static void main(String[] args) 
	{
      Scanner s = new Scanner(System.in);
      System.out.print("Enter the size of the array: ");
      int n = s.nextInt();		

      int arr[] = new int[n];

      for(int i = 0; i <arr.length ; i++)
      {
      	System.out.print("Enter the value of arr["+(i+1)+"]:");
      	arr[i]=s.nextInt();
      }

      System.out.print("Enter the number you want to search: ");
      int x = s.nextInt();

      System.out.println(find(arr,x));

	}

}
