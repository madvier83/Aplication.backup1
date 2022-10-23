#include <iostream>

using namespace std;

int main()
{
    int banyak_jenis ,banyak_potong ,harga[banyak_jenis];
    char jenis_potong;

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

    for(int x=0; x<banyak_jenis; x+=1){
        cout << " Jenis Ke-" << x+1 << endl;
        cout << "   Jenis Potong [D/P/S] : ";
        cin >> jenis_potong;
        cout << "   Banyak Potong        : ";
        cin >> banyak_potong;

        if (jenis_potong == 'D'){
            harga[x] = 2500 * banyak_potong;
        }
        else if (jenis_potong == 'P'){
            harga[x] = 2000 * banyak_potong;
        }
        else if (jenis_potong == 'S'){
            harga[x] = 1500 * banyak_potong;
        }
    }
    return 0;
}
