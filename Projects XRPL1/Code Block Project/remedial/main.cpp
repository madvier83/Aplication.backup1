#include <iostream>

using namespace std;

int main()
{
   char jesu,ransu;
    int jmlh,total;
    cout<<"masukan pilihan jesu"<<endl;
    cout<<"a.bendera"<<endl;
    cout<<"b.dancow"<<endl;
    cout<<"masukan ukuran susu"<<endl;
    cout<<"1.kecil"<<endl;
    cout<<"2.sedang"<<endl;
    cout<<"3.besar"<<endl;

    cout<<"masukan pilihan jenis susu"<<endl;
    cin>> jesu;
    cout<<"masukan pilihan ukuran susu"<<endl;
    cin>> ransu;

    if(jesu == 'a'){
        if(ransu == '1')
        jmlh=total*15000;
        cout<<"jmlh susu yang akan anda pesan senilai "<<endl;
    }
    else if(ransu == '2'){
        jmlh=total*20000;
        cout<<"jmlh susu yang akan anda pesan senilai "<<endl;
    }
    else if(ransu == '3'){
        jmlh=total*25000;
        cout<<"jmlh susu yang akan anda pesan senilai "<<endl;
    }


    return 0;
}
