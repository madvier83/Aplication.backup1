using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Program_Func_Konversi
{
    class Program
    {
        int hitungint();

        static void Main(string[] args)
        {
            int C1 ,F;
            float C2;
            double C3;

            Console.Write(" > Masukan suhu dalam farenheit : ");
            F = int.Parse(Console.ReadLine());

            hitungint(C1);

            Console.WriteLine(C1);
        }

        int hitungint(a)
        {
            a = (F - 32.0) * 5 / 9;
        }
    }
}
