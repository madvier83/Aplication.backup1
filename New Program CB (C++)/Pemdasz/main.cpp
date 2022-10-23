#include <iostream>

using namespace std;

int main()
{
    int banyak_jenis;

    cout << " GEROBAK FRIED CHICKEN " <<endl;
    cout << "=======================" <<endl;
    cout << " Kode  Jenis     Harga " <<endl;
    cout << "=======================" <<endl;
    cout << " D     Dada    Rp.2500 " <<endl;
    cout << " P     Paha    Rp.2000 " <<endl;
    cout << " S     Sayap   Rp.1500 " <<endl;
    cout << "=======================" <<endl;
    cout << "\n > Banyak Jenis : ";
    cin >> banyak_jenis;

    int bp[banyak_jenis] ,harga[banyak_jenis] ,jb ,pajak ,tb;
    char jp[banyak_jenis];

    for(int x=0; x<banyak_jenis; x++){

        cout << "\n Jenis Ke-" << x+1 << endl;
        cout << "   Jenis Potong [D/P/S] : ";
        cin >> jp[x];
        cout << "   Banyak Potong        : ";
        cin >> bp[x];

        if (jp[x] == 'D'){
            harga[x] = 2500;
        }
        if (jp[x] == 'P'){
            harga[x] = 2000;
        }
        else if (jp[x] == 'S'){
            harga[x] = 1500;
        }

        jb = jb + harga[x];
    }
    pajak = jb * 10 / 100;
    tb = jb + pajak;

    cout << "\n===================================================" << endl;
    cout << "                 GEROBAK FRIED CHICKEN           " << endl;
    cout << "===================================================" << endl;
    cout << " No   Jenis       Harga        Banyak       Jumlah " << endl;
    cout << "      Potong      Satuan       Beli         Harga  " << endl;
    cout << "===================================================" << endl;

    for(int i=0; i<banyak_jenis; i+=1)
    {
        cout << i+1 << "\t" << jp[i] << "\t" << harga[i] << "\t\t" << bp[i] << "\tRp." << harga[i] << endl;
    }

    cout << "\n\t jumlah bayar Rp." << jb << endl;
    cout << "\t Pajak 10%    Rp." << pajak << endl;
    cout << "\t Total Bayar  Rp." << tb <<endl;
    return 0;
}
