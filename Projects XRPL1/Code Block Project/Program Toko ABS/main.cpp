#include <iostream>

using namespace std;

int main(){

    int pil ,jum ,harga=0 ,diskon ,total=0;
    char yt;
input :
    cout << " >>> Promosi Toko Abs <<< " << endl;
    cout << " Daftar barang " << endl;
    cout << "1) Sabun Mandi " << endl;
    cout << "2) Sabun Cuci  " << endl;
    cout << " > Masukan Pilihan : ";
    cin >> pil;

    switch (pil){
    case 1:
        cout << " > Masukan jumlah pembelian barang : ";
        cin >> jum;
        harga=jum*500;
        if (jum >= 10){
            diskon=harga*10/100;
            harga=harga-diskon;
        }
        if (jum >= 5 && jum < 10){
            diskon=harga*3/100;
            harga=harga-diskon;
        }
        else if (jum < 5){
            cout << " Anda tidak mendapat diskon :v " << endl;
        }
        break;
    case 2:
        cout << " > Masukan jumlah pembelian barang : ";
        cin >> jum;
        harga=jum*500;
        if (jum >= 10){
            diskon=harga*20/100;
            harga=harga-diskon;
        }
        if (jum >= 3 && jum < 10){
            diskon=harga*8/100;
            harga=harga-diskon;
        }
        else if (jum < 3){
            cout << " Anda tidak mendapat diskon :v " << endl;
        }
        break;
    default:
        cout << " Masukan Salah \n" << endl;goto input;break;
    }
    total=total+harga;
    cout << " Harga Pembayaran : Rp." << harga << endl;
    cout << "\n Apakah Anda ingin membeli sabun lain (Y/T)";
    cin >> yt;
    if(yt == 'Y' || yt == 'y'){
        goto input;
    }
    cout << "\n Total Pembayaran : Rp." << total;

    return 0;
}
