import java.util.*;
public class MyClass {
    public static void main(String args[]) {
      Scanner kb=new Scanner(System.in);
      int i,len,count;
      count=0;
      char ch;
      String str;
      System.out.println("Enter a string to count the number of vowels in it");
      str=kb.nextLine();
      len=str.length();
      for(i=0;i<len;i++)
      {
          ch=str.charAt(i);
          if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
          {
              count++;
          }
      }
      System.out.println("Number of vowels in the string:"+count);
    }
}
