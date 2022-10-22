import java.util.*;
public class MyClass {
    public static void main(String args[]) {
     Scanner kb=new Scanner(System.in);
     int d,r;
     String s;
     s="";
     System.out.println("Enter a decimal number to convert it to binary ");
     d=kb.nextInt();
     while(d!=0)
     {
         r=d%2;
         s=r+s;
         d=d/2;
     }
     System.out.println(s);
    }
}
