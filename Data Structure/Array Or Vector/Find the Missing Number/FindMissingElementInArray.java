package com.chanpreet.Q3;

import java.util.Scanner;

public class FindMissingElementInArray {

	public static void main(String[] args) {
		int n,sum,i;
		
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int a[]=new int[n];
		for(i=0;i<n;i++)
			a[i]=sc.nextInt();
		sc.close(); //input ends
		
		sum=((n+1)*(n+2))/2; //finding sum of n+1 elements because one of them is missing
		
		for(i=0;i<n;i++)
			sum-=a[i];
		
		System.out.println(sum);
	}

}
