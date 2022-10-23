#include <iostream>

using namespace std;

int main(){

    float A ,H1 ;
    char D;

    cout << "  === Program Mengubah Satuan Suhu === /n" << endl;
    cout << " Masukan Besar Suhu Dan Satuanya : ";
    cin >> A >> D;

    if (D='C'){
        H1=(A/5)*32;
        cout << A << D << " = " << H1 << "F" << endl;

    }



    return 0;

}
