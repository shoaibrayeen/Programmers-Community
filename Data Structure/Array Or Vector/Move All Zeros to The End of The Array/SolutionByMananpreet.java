import java.util.Scanner;
class ZeroesToEndOfArray
{
     public static int[] move(int arr[])
     {
     	int temp = 0;
     	int l = arr.length-1;
     	int i=0;
     	while(i<arr.length && i<l)
     	{
     		if (arr[i]==0) 
     		{
     			while(arr[l]==0)
     			{
     				l--;
     			}

     			temp = arr[i];
     			arr[i]=arr[l];
                arr[l]=temp;
                l--;
                i++;
     		}
     	}
     	return arr;
     }
     public static void main(String[] args)
      {
      	Scanner s = new Scanner(System.in);
      	System.out.print("Enter the size of the array : ");
     	int n = s.nextInt();

     	int arr[] = new int[n];
     	for(int i = 0; i <arr.length; i++)
     	{
     	System.out.print("Enter the value of arr["+(i+1)+"]:");
     	arr[i]= s.nextInt();        
         }
     System.out.print("The new array after having shifted the zeroes to end is:");
     int array[] = move(arr);
     for(int i = 0; i <array.length ; i++)
     {
     	System.out.print(array[i]+" ");
     }
 }
}
