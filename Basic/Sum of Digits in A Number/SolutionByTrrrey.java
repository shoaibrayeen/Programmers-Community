import java.util.Scanner;

 class Main { 

     static int sumDigits(int n) 
     {     
         int sum = 0; 

         while (n != 0) 
         { 
             sum = sum + n % 10; 
             n = n/10; 
         } 

     return sum; 
     } 


     public static void main(String[] args) 
     { 
       Scanner s = new Scanner(System.in);

	    System.out.print("\nEnter a number\t:\t");

	    int n = s.nextInt();
      System.out.println("\nSum of Digits\t:\t" + sumDigits(n)); 
     } 
 } 
