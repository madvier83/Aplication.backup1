
package perbandingan;

import java.util.Scanner;

/**
 *
 * @author MadvieR8103
 */
public class Perbandingan {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        int a;
        int b;
        
        System.out.print(" Masukan Angka Pertama : ");
        a = input.nextInt();
        System.out.print(" Masukan Angka Kedua   : ");
        b = input.nextInt();
        System.out.println("");
        
        if(a == b){
            System.out.println(" Angka " + a + " Sama Dengan Angka " + b);
        }else if(a < b){
            System.out.println(" Angka " + a + " Lebih Kecil dari " + b);           
        }else if(a > b){
            System.out.println(" Angka " + a + " Lebih Besar dari " + b);           
        }
        if(a != b){
            System.out.println(" Angka " + a + " Tidak Sama Dengan Angka " + b);           
        }   
        if(a >= b){
            System.out.println(" Angka " + a + " Lebih Besar/Sama dengan " + b);           
        }  
        if(a <= b){
            System.out.println(" Angka " + a + " Lebih Kecil/Sama dengan " + b);           
        }       
    }  
}
