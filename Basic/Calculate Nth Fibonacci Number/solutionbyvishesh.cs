using System;

namespace Fibonacci
{
    class Program
    {
        public static int Fibo(int number)
        {
            if(number <= 0)
            {
                return 1;
            }
            else
            {
                return Fibo(number-1) + Fibo(number-2);
            }
        }
        static void Main(string[] args)
        {
            string val = Console.ReadLine();
            int res = Convert.ToInt32(val);
            Console.WriteLine(Fibo(res));
        }
    }
}
