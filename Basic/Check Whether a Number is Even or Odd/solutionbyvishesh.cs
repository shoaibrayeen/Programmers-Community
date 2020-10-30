using System;

namespace evenodd
{
    class Program
    {
        public static string evenodd(int number)
        {
            if ((number & 1) == 0)
            {
                return "even";
            }
            else
                return "odd";
        }
        static void Main(string[] args)
        {
            string val = Console.ReadLine();
            int res = Convert.ToInt32(val);
            Console.WriteLine(evenodd(res));
        }
    }
}
