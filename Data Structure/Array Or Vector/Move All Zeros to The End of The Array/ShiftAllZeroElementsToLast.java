package com.chanpreet.Q1;

import java.util.Scanner;

public class ShiftAllZeroElementsToLast {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a[]=new int[n];
		for(int i=0;i<n;i++)
			a[i]=sc.nextInt();
		sc.close();
		int len=a.length-1;
		int k=a.length-1; //to keep track of index of zeroes
		for(int i=len;i>=0;i--){
			if(a[i]==0){
				for(int j=i;j<k;j++)
					a[j]=a[j+1];
				a[k]=0;
				k--;
			}
		}
		
		disp(a);
	}

	//function to display array
	private static void disp(int[] a) {
		for(int i:a){
			System.out.print(i+" ");
		}
		System.out.println();
	}
}