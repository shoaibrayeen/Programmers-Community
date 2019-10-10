import java.util.*; 
public class SolutionByVyomChandra
{ 
	public static void main(String[] args) 
	{ 
 
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Size: ");
		int size=sc.nextInt();
		System.out.print("Enter elements: ");
		int intArr[] = new int[size];
		for(int i=0;i<size;i++)
			intArr[i]=sc.nextInt();
		Arrays.sort(intArr);
		System.out.print("Enter key: ");
		int intKey = sc.nextInt(); 
		if(Arrays.binarySearch(intArr,intKey)>=0)
			System.out.println(intKey + " found at index = "+Arrays.binarySearch(intArr,intKey)); 
		else
			System.out.println("not found");
		
	} 
} 
