#include <iostream>

using namespace std;

int main(){
    string gol;
    int kel ,tun ,gaji;

    cout << " > Masukan Jenis Golongan Anda : ";
    cin >> gol;

    if(gol=="3A"){
        gaji=1000000;
        cout << " > masukan jumlah keluarga : ";
        cin >> kel;
        if(kel>=2){
            tun=gaji/2+100000;
            gaji=gaji+tun;
            cout << " - Gaji yang anda terima sebesar : Rp." << gaji << endl;
        }
        else{
            tun=100000;
            gaji=gaji+tun;
            cout << " - Gaji yang anda terima sebesar : Rp." << gaji << endl;
        }
    }
        if(gol=="3B"){
        gaji=2000000;
        cout << " > masukan jumlah keluarga : ";
        cin >> kel;
        if(kel>=2){
            tun=gaji/2+300000;
            gaji=gaji+tun;
            cout << " - Gaji yang anda terima sebesar : Rp." << gaji << endl;
        }
        else{
            tun=300000;
            gaji=gaji+tun;
            cout << " - Gaji yang anda terima sebesar : Rp." << gaji << endl;
        }
    }
        else{
            cout << " Masukan golongan salah " << endl;
        }

    return 0;

}
