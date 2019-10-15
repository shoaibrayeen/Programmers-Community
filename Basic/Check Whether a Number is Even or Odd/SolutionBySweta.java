
import java.util.Scanner;

class GFG
{
   
public static boolean isEven(int n)
{
if((n & 1) == 0)
return true;
else
return false;
}


public static void main(String[] args)
{
Scanner input = new Scanner(System.in);
        int number = input.nextInt();

if(isEven(number) == true)
System.out.print("EVEN");
else
System.out.print("ODD");
}
}
