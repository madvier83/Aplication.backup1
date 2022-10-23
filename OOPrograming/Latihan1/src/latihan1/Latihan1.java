package latihan1;

import java.util.Scanner;
/*
    Author MAdvieR  
*/
public class Latihan1 
{
    public  static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);//awalan
       
        int angka1;//angka pertama
        int angka2;//angka kedua
        int hasil;//hasil penjumlahan
        
        System.out.print(" Masukan Angka Pertama : ");
        angka1 = input.nextInt();
        System.out.print(" Masukan Angka Kedua   : ");
        angka2 = input.nextInt();
        
        hasil = angka1 + angka2;//penjumlahan
        System.out.print(" Hasil penjumlahan     : ");
        System.out.println(hasil);//output hasilnya
        
        
    }
}
