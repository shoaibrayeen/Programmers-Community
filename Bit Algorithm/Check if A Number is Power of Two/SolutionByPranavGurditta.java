import java.util.*;
class PowerOfTwo
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number to check if it is a power of 2.");
        int n=sc.nextInt();
        if(n<=0)
        {
            System.out.println("Enter a positive number.");
            n=sc.nextInt();
        }
        PowerOfTwo obj=new PowerOfTwo();
        if(obj.Power_of_two(n))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
    public boolean Power_of_two(int n)
    {
        if((n & (n-1) )==0)
            return true;
        else
            return false;
    }
    
}
