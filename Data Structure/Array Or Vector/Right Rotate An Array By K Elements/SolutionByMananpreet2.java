import java.util.Scanner;
class RightRotateUsingReversal
{
	 private static int[] rightRotate(int arr[], int size, int k)
	 {
           reverse(arr,0, size-k-1);
           reverse(arr,size-k, size-1);
           reverse(arr,0,size-1);
           
           return arr;
	 }
	 private static void reverse(int arr[], int start, int end)
	 {
	 	int temp = 0;

        while(start<end)
        {
        	temp=arr[start];
        	arr[start]=arr[end];
        	arr[end]=temp;

        	start++;
        	end--;
        }

	 }
	 public static void main(String[] args)
	  {
	 	Scanner s = new Scanner(System.in);

	 	System.out.print("Enter the size of the array: ");
	 	int size = s.nextInt();

	 	int arr[]= new int[size];

	 	for(int i =0; i <size; i++)
	 	 {
	 		System.out.print("Enter value"+(i+1)+": ");
	 		arr[i]=s.nextInt();
	 	 }

         System.out.print("K is the number of elements you want to rotate the array with. Enter K: ");
         int k = s.nextInt();

         int ar[] = rightRotate(arr,size, k);

         for(int i =0; i <ar.length;i++)
         {
             System.out.print(ar[i]+" ");
         }
	 }
}
