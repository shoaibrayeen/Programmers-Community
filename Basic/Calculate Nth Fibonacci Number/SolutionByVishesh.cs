using System;

namespace Fibonacci
{
    class Program
    {
        public static int Fibo(int number)
        {
            if(number == 1)
            {
                return 0;
            }
            else if ( number == 2 ) 
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
