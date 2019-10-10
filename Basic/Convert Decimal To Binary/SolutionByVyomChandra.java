import java.io.*; 
import java.util.Scanner;
class SolutionByVyomChandra 
{ 
	static void decToBinary(int n) 
	{ 
		String s="";
		int i = 0; 
		if(n==0){
		    s="0";
		}
		while (n > 0) 
		{ 
			i=n%2;
			s=i+""+s;
			n/=2;
		} 
		System.out.println(s);
	} 
	public static void main (String[] args) 
	{ 
                Scanner sc=new Scanner(System.in);
		int n = sc.nextInt(); 
		decToBinary(n); 
	} 
} 
