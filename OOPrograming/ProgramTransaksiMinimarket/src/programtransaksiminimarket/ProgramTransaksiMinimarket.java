package programtransaksiminimarket;
import java.util.Scanner;

public class ProgramTransaksiMinimarket {
    public static void main(String[] args) {
        
        int kodebarang, totalbayar=0, jumlahbeli,uangbeli, uangkembalian;
        char yt;
        
        Scanner input = new Scanner(System.in);
        do{
        System.out.println("==================================");
        System.out.println(">>>    Barang Yang Tersedia    <<<");
        System.out.println("==================================");
        System.out.println(" (1) Air Mineral        Rp.3000");
        System.out.println(" (2) Makanan Ringan     Rp.6000");
        System.out.println(" (3) Deterjen           Rp.12000");
        System.out.println(" (4) Minyak             Rp.15000");
        System.out.println(" (5) Gula               Rp.10000");
        System.out.println("==================================");
        
        
        System.out.println(" Pilih Barang Yang Ingin Anda Beli.");
        System.out.print(" Kode Barang (num) : ");
        
        kodebarang = input.nextInt();
        System.out.println("");        
        
        System.out.println(" Masukan Jumlah Barang Yang Anda Beli.");
        System.out.print(" Jumlah Pembelian  : ");
        
        jumlahbeli = input.nextInt();
        System.out.println("");
        
        switch(kodebarang){
            case 1:
                System.out.println(" Air Mineral ( Rp.3000 X " + jumlahbeli + " )");
                totalbayar += 3000 * jumlahbeli;
                break;
            case 2:
                System.out.println(" Makanan Ringan ( Rp.6000 X " + jumlahbeli + " )");
                totalbayar += 6000 * jumlahbeli;
                break;
            case 3:
                System.out.println(" Deterjen ( Rp.12000 X " + jumlahbeli + " )");
                totalbayar += 12000 * jumlahbeli;
                break;
            case 4:
                System.out.println(" Minyak ( Rp.15000 X " + jumlahbeli + " )");
                totalbayar += 15000 * jumlahbeli;
                break;
            case 5:
                System.out.println(" Gula ( Rp.10000 X " + jumlahbeli + " )");
                totalbayar += 10000 * jumlahbeli;
                break;
            default:
                System.out.println(" Kode Barang Tidak Valid ! ");
                break;}
        
        System.out.println(" Total Pembayaran : Rp." + totalbayar);
        System.out.println("");
        
        System.out.print(" Apakah Anda Ingin \n Membeli Barang Lainya ? (y/n) ");
        yt = input.nextChar();
        }while(yt == "t");
        
        System.out.println("");
        System.out.println(" Total Harga Yang Harus Anda Bayar : Rp." + totalbayar);
        
        System.out.print(" Uang yang dibayarkan : Rp.");
        uangbeli = input.nextInt();
        
        uangkembalian = uangbeli - totalbayar;
        System.out.println("");
        System.out.println(" Kembalian : Rp." + uangkembalian);
        
    }  
}
