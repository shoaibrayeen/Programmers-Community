using System;
using System.Collections.Generic;
using System.Text;

namespace Hacktober_Fest
{
    class Factorial
    {
        public static int factoria(int number)
        {
            if (number == 0)
            {
                return 1;
            }
            else
            {
                return (number * factoria(number - 1));
            }
        }
        public static void Main(string[] args)
        {
            string val;
            val = Console.ReadLine();
            int res = Convert.ToInt32(val);
            Console.WriteLine(factoria(res));
        }
    }
}
