import java.util.*;
   
   public class Main{
   
   public static void main(String[] args) {
     Scanner scn = new Scanner(System.in);
     int n = scn.nextInt();
     int i;
     while(n>0){
         i=n%10;
         System.out.print(i);
         n=n/10;
     } 
    }
   }
