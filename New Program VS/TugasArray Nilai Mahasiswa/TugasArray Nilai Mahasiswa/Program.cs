using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TugasArray_Nilai_Mahasiswa
{
    class Program
    {
        static void Main(string[] args)
        {
            int num;

            Console.Write(" > Masukan Jumlah Mahasiswa : ");
            num = int.Parse(Console.ReadLine());
            Console.WriteLine();
            //num > kapasitas array
            int[] jum = new int[num];
            string[] nam = new string[num];
            float[] nit = new float[num];
            float[] uts = new float[num];
            float[] uas = new float[num];
            float[] akh = new float[num];
            char[] grd = new char[num];

            /* nam = nama mahasiswa
             * nit = nilai tugas
             * akh = nilai akhir
             */

            int x = 0;
            for ( int i = 1; i <= num; i++)
            { /* Input nilai array */
                Console.WriteLine("---------------------------------");
                Console.WriteLine(" - Mahasiswa ke-" + i);
                Console.Write("\n Nama Mahasiswa : ");
                string nama = Console.ReadLine();
                nam[x] = nama;

                Console.Write(" Nilai Tugas    : ");
                float tugas = float.Parse(Console.ReadLine());
                nit[x] = tugas;

                Console.Write(" Nilai UTS      : ");
                float nuts = float.Parse(Console.ReadLine());
                uts[x] = nuts;

                Console.Write(" Nilai UAS      : ");
                float nuas = float.Parse(Console.ReadLine());
                uas[x] = nuas;

                akh[x] = (nit[x] * 30/100) + (uts[x] * 30/100) + (uas[x] * 40/100);
                // grade 
                if(akh[x] >= 80)
                {
                    grd[x] = 'A';
                }
                else if (akh[x] >= 70 && akh[x] < 80)
                {
                    grd[x] = 'B';
                }
                else if (akh[x] >= 59 && akh[x] < 70)
                {
                    grd[x] = 'C';
                }
                else if (akh[x] >= 50 && akh[x] < 59)
                {
                    grd[x] = 'D';
                }
                else if (akh[x] < 50)
                {
                    grd[x] = 'E';
                }

                x++;
                Console.WriteLine();
            }
            Console.Clear();

            Console.WriteLine("=============================================================");
            Console.WriteLine("                         Daftar Nilai                       ");
            Console.WriteLine("=============================================================");
            Console.WriteLine(" No.   Nama                       Nilai                      ");
            Console.WriteLine("       Mahasiswa      -----------------------------    grade ");
            Console.WriteLine("                      Tugas   UTS     UAS     Akhir          ");
            Console.WriteLine("=============================================================");

            for ( int i = 0; i < num; i++)
            { /* Output loop */
                Console.Write((i + 1) + "     ");
                Console.Write(nam[i] + "            ");
                Console.Write(nit[i] + "      ");
                Console.Write(uts[i] + "      ");
                Console.Write(uas[i] + "      ");
                Console.Write(akh[i] + "      ");
                Console.Write(grd[i] + "      ");

                Console.WriteLine();
            }
            Console.ReadKey();

        }
    }
}