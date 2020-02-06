
import java.util.*;
public class FindUniqueElement {
	
		public static int uniqueElement(int[] arr){
	     int result=arr[0];
	     for(int i=1;i<arr.length;i++){
	    	 result^=arr[i];
	     }
	     return result;
		}
	
  public static void main(String[] args) {
	Scanner s =new Scanner(System.in);
	System.out.println("Input size: ");
	int size=s.nextInt();
	int arr[]=new int [size];
	System.out.println("Enter array:");
	for(int i=0;i<size;i++)
		arr[i]=s.nextInt();
	System.out.println("The unqiue element is "+uniqueElement(arr));
    
}
}
