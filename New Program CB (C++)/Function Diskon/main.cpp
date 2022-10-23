#include <iostream>

using namespace std;

int potong(int x ,int y) {
    int h = y * x / 100;
    return h;
}

int main()
{
    int harga ,diskon;

    cout << " > Jumlah pembelian barang : Rp.";
    cin >> harga;

    if (harga < 1000000){
       diskon = potong(0 ,harga);
    }
    if (harga >= 1000000 && harga <= 5000000){
        diskon = potong(20 ,harga);
    }
    else if (harga > 5000000) {
        diskon = potong(35 ,harga);
    }
    cout << "\n - Besar diskon yang diberikan : Rp."<< diskon << endl;
    harga = harga - diskon;
    cout << " - Besar harga yang harus dibatarkan : Rp." << harga << endl;

    return 0;
}
