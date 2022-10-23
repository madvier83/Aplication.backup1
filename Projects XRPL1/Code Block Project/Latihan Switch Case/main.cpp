#include <iostream>

using namespace std;

int main(){
    int bulan;

    cout << " Masukan 1-12 : ";
    cin >> bulan;
    switch (bulan){
    case 1:
        cout<<"Januari";
    break;
    case 2:
        cout<<"Februari";
    break;
    case 3:
        cout<<"Maret";
    break;
    case 4:
        cout<<"April";
    break;
    case 5:
        cout<<"Mei";
    break;
    case 6:
        cout<<"Juni";
    break;
    case 7:
        cout<<"Juli";
    break;
    case 8:
        cout<<"agustus";
    break;
    case 9:
        cout<<"september";
    break;
    case 10:
        cout<<"oktober";
    break;
    case 11:
        cout<<"november";
    break;
    case 12:
        cout<<"desember";
    break;
    default :
        cout << " Angka salah " << endl;
    }
return 0;
}
