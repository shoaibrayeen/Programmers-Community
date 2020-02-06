import java.util.Scanner;
import java.util.HashMap;
class NonRepeatingElem2
{
	private static void find(int arr[])
	{
		HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();

       //Putting values inside the hashmap

		for(int x : arr)    //foreach loop
		{
			if(! hmap.containsKey(x)) // boolean containsKey(Object key) returns true if key is present in the hashmap.
				hmap.put(x,1);
			else
				hmap.put(x,hmap.get(x)+1); // Value get(Object key) returns the value corresponding to the key.
		}

		//Traversing the hashmap to find the non repeated element

		for(int x : hmap.keySet())   // Set keySet returns the keySet of the hashmap.
		{
			if(hmap.get(x)==1)
				System.out.println("The non repeated element in this array is: "+x);
		}
	}
	public static void main(String[] args)
	 {
		Scanner s = new Scanner(System.in);

		System.out.println("Enter the size of the array");
		int n = s.nextInt();

		int arr[] = new int[n];
		
		for(int i = 0; i < n ; i++)
		{
			System.out.print("Input arr["+(i+1)+"]:");
			arr[i]=s.nextInt();
		}
		find(arr);
	}
}
