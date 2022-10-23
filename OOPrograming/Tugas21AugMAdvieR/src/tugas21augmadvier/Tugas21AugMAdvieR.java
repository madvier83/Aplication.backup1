package tugas21augmadvier;
import java.util.Scanner;

/**
 *
 * @author MadvieR8103
 */

public class Tugas21AugMAdvieR {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        String nama, kelas, predikat = "" ,status = "";
        float mat, ind, ing, hasil;
        
        System.out.print("Nama Siswa        : ");
        nama = input.nextLine();
        System.out.print("Kelas             : ");
        kelas = input.nextLine();
        System.out.print("Nilai Matematika  : ");
        mat = input.nextFloat();
        System.out.print("Nilai B.Indonesia : ");
        ind = input.nextFloat();
        System.out.print("Nilai B.Inggris   : ");
        ing = input.nextFloat();
        
        hasil = (mat + ind + ing) / 3;
        
        if(hasil < 31){
            predikat = "E";
        }else if(hasil < 51 && hasil >= 31){
            predikat = "D";
        }else if(hasil < 71 && hasil >= 51){
            predikat = "C";
        }else if(hasil < 91 && hasil >= 71){
            predikat = "B";
        }else if(hasil < 101 && hasil >= 91){
            predikat = "A";
        }
        
        if(hasil < 51){
            status = "GAGAL";
        }else if(hasil < 101 && hasil >= 51){
            status = "LULUS";
        }
        System.out.println("===========================");
        System.out.println("Hasil Akhir         = " + hasil);
        System.out.println("Predikat            = " + predikat);
        System.out.println("Status              = " + status);
    }
    
}
