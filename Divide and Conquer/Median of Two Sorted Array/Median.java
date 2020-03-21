/*
 * Solution for Two Arrays are given and you need to find median of the array obtained after merging the 2 arrays.
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;
public class Median {

	public static void main(String[] args) throws Exception {
		BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
		
		//Taking input as arrays and their respective sizes
		int size1=Integer.parseInt(br.readLine());
		int size2=Integer.parseInt(br.readLine());
		
		int arr1[]=Arrays.stream(br.readLine().split("\\s+")).mapToInt(Integer::parseInt).toArray();
		int arr2[]=Arrays.stream(br.readLine().split("\\s+")).mapToInt(Integer::parseInt).toArray();
		
		//Calling function
		mergeMedian(arr1,arr2,size1,size2);
	}
	
	private static void mergeMedian(int arr1[],int arr2[],int size1,int size2) {
		int i=0,j=0,k=0;
		int sortedData[]=new int[size1+size2];
		
		//Sorting the data in Ascending order
		while(i<size1 && j<size2) {
			
			if(arr1[i]<arr2[j])
				sortedData[k++]=arr1[i++];
			else
				sortedData[k++]=arr2[j++];
		}
		
		//If elements in arr1 are left ,all  are add directly
		while(i<size1) {
			sortedData[k++]=arr1[i++];
		}
		
		//Else if elements in arr2 are left ,all  are add directly
		while(j<size2) {
			sortedData[k++]=arr2[j++];
		}
		

		int median=0;
		int medianValue=0;
		int size=size1+size2;
		
		//If no. of sorted elements are odd using median formula for odd size and printing
		if((size & 1)==1) {
			median=(size-1)/2;
			medianValue=sortedData[median];
			System.out.print(medianValue);
		}
//		If no. of sorted elements are even using median formula for even size and printing
		else {
			int median1=(size-1)/2;
			int median2=median1+1;
		
			double medianValueD=(sortedData[median1]+sortedData[median2])/2;
			System.out.println(medianValueD);
		}
	}

}
