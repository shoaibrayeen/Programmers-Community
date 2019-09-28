package com.chanpreet.Q2;

import java.util.Scanner;

public class RightRotateArrray {

	public static void main(String[] args) {
		int n,k,count=0,temp,i;
		
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int a[]=new int[n];
		for(i=0;i<n;i++)
			a[i]=sc.nextInt();
		k=sc.nextInt();
		sc.close();  //input ends
		
		while(count<k){	
			temp=a[n-1];
			
			for(i=n-2;i>=0;i--)
				a[i+1]=a[i]; //shifting elements
			
			a[0]=temp;
			count++;
		}
		
		display(a);
	}

	private static void display(int[] a) {
		for(int i:a)
			System.out.print(i+" ");
	}
}
