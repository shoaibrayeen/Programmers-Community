/* You are given two numbers A and B. You have to print the count of bits needed to be flipped to convert 'A' to 'B'.

Sample Input:
57
76

Sample Output:
5

Constraints
-10^9 <= A,B <= 10^9

*/
import java.io.*;
import java.util.*;

public class Main {
  public static void main(String[] args){
    Scanner scn = new Scanner(System.in);
    int a = scn.nextInt();
    int b = scn.nextInt();

    int xor=a^b,count=0;
    while(xor!=0){
        xor = xor & (xor-1);
        count++;
    }
    
    System.out.println(count);
  }
}
