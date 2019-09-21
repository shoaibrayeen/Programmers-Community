package com.chanpreet.Q1;

public class ShiftAllZeroElementsToLast {

	public static void main(String[] args) {
		int a[]={1,0,9,6,0,8,1,0};
		int len=a.length-1;
		int k=a.length-1; //to keep track of index of zeroes
		
		for(int i=len;i>=0;i--){
			if(a[i]==0){
				for(int j=i;j<k;j++)
					a[j]=a[j+1];
				a[k]=0;
				k--;
				disp(a);
				
			}
		}
		
		disp(a);
	}

	private static void disp(int[] a) {
		for(int i:a){
			System.out.print(i+" ");
		}
		System.out.println();
	}

}
