using System;

namespace Sumofdigits
{
    class Program
    {
        public static int sum(int number)
        {
            if(number==0)
            {
                return 0;
            }
            else
            {
                return (number % 10 + sum(number/10));
            }
        }
        static void Main(string[] args)
        {
            string val = Console.ReadLine();
            int res = Convert.ToInt32(val);
            Console.WriteLine(sum(res));
        }
    }
}
