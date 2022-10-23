#include <iostream>

using namespace std;

int tarif_total(int a,int b){
    int c = a * b;
    return c;
}

int main()
{
    string nama ,jenis;
    char kode;
    int bp ,tarif ,sewa;

    cout << " Perpustakaan \"Kecil Kecilan\" " << endl;
    cout << "===============================\n" << endl;
    cout << " Nama Penyewa Buku : "; cin >> nama;
    cout << " kode buku [c/k/n] : "; cin >> kode;
    cout << " Banyak pinjam     : "; cin >> bp;

    if (kode == 'c'){
        jenis = "cerpen";
        tarif = tarif_total(bp ,500);
        sewa = 500;
    }
    else if (kode == 'k'){
        jenis = "komik";
        tarif = tarif_total(bp ,700);
        sewa = 700;
    }
    else if (kode == 'n'){
        jenis = "novel";
        tarif = tarif_total(bp ,1000);
        sewa = 1000;
    }

    cout << "\n Tarif sewa   : Rp." << sewa << endl;
    cout << " Jenis buku   : " << jenis << endl;

    cout << "\n Penyewa dengan nama " << nama << endl;
    cout << " jumlah bayar sewaan sebesar Rp." << tarif <<endl;

    return 0;
}
