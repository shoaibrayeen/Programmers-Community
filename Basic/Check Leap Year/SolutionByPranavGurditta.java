import java.util.*;
class Leap_year
{
    public static void main()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a year to check if it is a leap year.");
        int year=sc.nextInt();
        if(year<0)
        {
            System.out.println("Enter a positive number as a year.");
            year=sc.nextInt();
        }
        Leap_year obj=new Leap_year();
        if(obj.leap_year(year))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
    public boolean leap_year(int year)
    {
        if(year%4==0)
            return true;
        else
            return false;
    }
    
}
