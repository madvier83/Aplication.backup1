#include <iostream>

using namespace std;

int main()
{
    string pin,rekening;
    char pilihmenu;
    int saldo= 1000000,tarik,setor,transfer;
    cout<< "Masukan pin anda : ";
    cin>> pin;

    if (pin == "12345")
{
            cout<<"1. Menu : "<< endl;
            cout<<"2. Informasi saldo "<< endl;
            cout<<"3. tarik tunai "<< endl;
            cout<<"4. seetor tunai "<< endl;
            cout<<"5. transfer "<< endl;
            cout<<" masukan pilihan menu :";
            cin>>pilihmenu;

            if(pilihmenu == '1') {
                cout<<"sisa saldo anda adalah =Rp. " << saldo <<endl;
            }
            else if (pilihmenu == '2') {
                cout<<"Masukan jumlah uang yang akan anda tarik =";
                cin>> tarik;
                saldo = saldo-tarik;

                cout<<" sisa saldo anda tinggal =Rp. "<<saldo<<endl;
            }
            else if (pilihmenu == '3') {
                cout<<"Masukan jumlah uang yang akan anda setor =";
                cin>> setor;
                saldo = saldo+setor;

                cout<<" penyetoran anda selesai " <<saldo<<endl;
                cout<<"jumlah saldo setelah setor adalah ="<<saldo<<endl;
            }
            else if (pilihmenu == '4') {
                cout<<"masukan nomor rekening anda ";
                cin>> rekening;
                cout<<"masukan jumlah uang yang akan anda transfer =";
                cin>> transfer;
                saldo = saldo-transfer;

                cout<<" transfer sukses " <<saldo<<endl;
                cout<<" sisa saldo anda setelah transfer adalah ="<<saldo<<endl;
            } else{
                cout<< "nomor menu yang anda pilih salah";
            }

   else{
    cout<<"maaf pin anda salah";
}

    return 0;
}
