import java.util.Scanner;

public class SolutionByChanpreet {

	public static void main(String[] args) {
		
		int i,n,a[];
		int result[]=new int[3];
		
		for(i=0;i<result.length;i++){
			result[i]=Integer.MIN_VALUE;
		}
		
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		if(n<3){
			errorMsg();
		}
		
		a=new int[n];
		
		for(i=0;i<n;i++){
			a[i]=sc.nextInt();
		}
		sc.close(); 					          //input ends
		
		for( i = 0; i < a.length; i++){
			if(a[i]>result[0]){             //Update the resultant array for the 3 largest elements
				result[2]=result[1];    
				result[1]=result[0];
				result[0]=a[i];
			}
		}
		display(result);
	}

	
	private static void display(int[] result) {
		for(int i:result){
			System.out.print(i+" ");
		}
	}
	
	private static void errorMsg() {
		try{
		throw new RuntimeException("The array should have atleast 3 elements");
		}catch(Exception e){
			System.out.println(e.getMessage());
		}
	}
		
}
