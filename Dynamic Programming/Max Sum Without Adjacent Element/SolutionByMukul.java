/*
	Max Sum Without Adjacent Elements
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class MaxSumWithoutAdjElem {
	
	public static int adjacent(List<List<Integer>> A) {
		int N = A.get(0).size();
		if(N == 0){
			return Integer.MIN_VALUE;
		}
		if(N == 1){
			Math.max(A.get(0).get(0), A.get(1).get(0));
		}
        	
		int sum = 0;
		int dp[] = new int[N];
        
		for(int i=0; i<N; i++){
			dp[i] = Math.max(A.get(0).get(i), A.get(1).get(i));
		}
        
		int dp2[] = new int[N+1];
        
		dp2[0] = 0;
		dp2[1] = dp[0];
        
		for(int i=2; i<=N; i++){
			dp2[i] = Math.max(dp2[i-2]+dp[i-1], dp2[i-1]);
		}
        
		return dp2[N];
	}

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		System.out.print("Enter the size of Array : ");
		int N = s.nextInt();
		
		List<List<Integer>> A = new ArrayList<>();
		A.add(new ArrayList<>());
		A.add(new ArrayList<>());
		
		System.out.print("Enter the elements of first row : ");
		for(int n=0; n<N; n++) {
			A.get(0).add(s.nextInt());
		}
		
		System.out.print("Enter the elements of second row : ");
		for(int n=0; n<N; n++) {
			A.get(1).add(s.nextInt());
		}
		
		int result = adjacent(A);
		System.out.println("Maximum Sum Without Adjacent Element : " + result);
	}

}

/*
	EXAMPLE
	input : Enter the size of Array : 4
			Enter the elements of first row : 1 2 3 4
			Enter the elements of second row : 2 3 4 5
	output : Maximum Sum Without Adjacent Element : 8
*/
