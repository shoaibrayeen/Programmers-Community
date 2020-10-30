using System;
using System.IO;
using System.Collections.Generic;


public class Class1
{
    static void leapyear(int year)
    {
        string ans;
        if ( (year % 400 == 0) || ( year % 100 != 0 && year % 4 == 0 ) )
        {
            ans = "yes";

        }
        else
        {
            ans = "no";
        }
        Console.WriteLine(ans);
    }
    static void Main(string[] args)
    {

        string val;
        val = Console.ReadLine();
        int res = Convert.ToInt32(val);
        leapyear(res);
    }
}
