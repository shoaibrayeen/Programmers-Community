/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Solution
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		int arr1[] = new int[m];
		
		for(int i = 0;i < m;i++){
			arr1[i] = sc.nextInt();
		}
		
		int n = sc.nextInt();
		int arr2[] = new int[n];
		
		for(int i = 0;i < n;i++){
			arr2[i] = sc.nextInt();
		}
		
		int k = sc.nextInt();
		
		int out[] = new int[m+n];
		int i = 0, j = 0, t = 0;
		
		while(i < m && j < n){
			if(arr1[i] < arr2[j]){
				out[t] = arr1[i];
				i++;
			}else{
				out[t] = arr2[j];
				j++;
			}
			t++;
		}
		
		if(i >= m){
			for(int s = j;s < n;s++){
				out[t] = arr2[s];
				t++;
			}
		}else{
			for(int s = i;s < m;s++){
				out[t] = arr1[s];
				t++;
			}
		}
		
		for(int s = 0;s < m+n;s++){
				System.out.print(out[s] + " ");
		}
		System.out.println();
		System.out.println(out[k-1]);
		
	}
}
