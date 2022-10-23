package tugas27agustus;
import java.util.Scanner;

public class Tugas27agustus {
    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int nilai;
        
        System.out.print(" Nilai    : ");
        nilai = input.nextInt();
        
        if(nilai >= 75) {
            System.out.println(" Hasil : Lulus");
        }else{          
            System.out.println(" Hasil : Gagal");
        }
    }
    
}
