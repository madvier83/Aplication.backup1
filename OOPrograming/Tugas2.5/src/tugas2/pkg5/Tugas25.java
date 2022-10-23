package tugas2.pkg5;
import java.util.Scanner;
/**
 *
 * @author MadvieR8103
 */
public class Tugas25 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //variabel awal
        int x, y, z ,hasil;
        //inputan
        System.out.print("Masukan Bilangan Pertama : ");
        x = input.nextInt();
        System.out.print("Masukan Bilangan Kedua   : ");
        y = input.nextInt();
        System.out.print("Masukan Bilangan Ketiga  : ");
        z = input.nextInt();
        System.out.println("============================");
        
        hasil = x + y + z;
        
        System.out.println("Product is \t\t" + hasil);
        System.out.println("Urutan angka = " + x + " " + y + " " + z);
        
    }
    
}
