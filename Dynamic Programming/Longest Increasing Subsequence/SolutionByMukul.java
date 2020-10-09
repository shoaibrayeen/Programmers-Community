/*
	find a subsequence of array in which the subsequence’s elements are in strictly increasing order, 
	and in which the subsequence is as long as possible.
*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class LongestIncreasingSubsequence {
	
	public static int lis(final List<Integer> A) {
      
		//Dynamic Programming
		int N = A.size();
		int dp[] = new int[N];
        
		dp[0] = 1;
		int result = 1;
       
		for(int i=1; i<N; i++){
  			int j = 0;
   			int max = 0;
     		while(j < i){
      			if(A.get(j) < A.get(i)){
     				if(dp[j] > max){	
					max = dp[j];
    				}
    			}
    			j++;
     		}
    		dp[i] = 1 + max;
  			if(dp[i] > result){
   				result = dp[i];
			}
  		}

    	return result;
	}

	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);
		
		System.out.print("Enter the number of elements : ");
		int N = s.nextInt();
		
		List<Integer> A = new ArrayList<>();
		System.out.print("Enter the elements : ");
		for(int n=0; n<N; n++) {
			A.add(s.nextInt());
		}
		
		int result = lis(A);
		System.out.println("Longest Common Subsequence : " + result);
		
	}

}

/*
	EXAMPLE
	input : Enter the number of elements : 4
			Enter the elements : 1 2 1 5
	output : Longest Common Subsequence : 3
*/
