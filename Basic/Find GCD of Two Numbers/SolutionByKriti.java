import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
      
      Scanner scn = new Scanner(System.in);
      int n1 = scn.nextInt();
      int n2 = scn.nextInt();
      int div=n1;
      int dvd=n2;
      while(dvd%div!=0){
          int r = dvd%div;
          dvd=div;
          div=r;
      }
      int gcd=div;
      System.out.println(gcd);
     }
    }
