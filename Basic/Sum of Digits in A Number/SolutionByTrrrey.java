// Java program to compute the sum of digits in a number.

import java.io.*; 
  
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
        int n = 123456;   
        System.out.println(sumDigits(n)); 
    } 
} 
