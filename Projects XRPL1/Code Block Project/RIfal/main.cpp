#include <iostream>

using namespace std;

int main()
{
    int gaji,kel,tun,tg ;
    string gol;

    cout<<"Masukan jenis golongan =" ;
    cin>>gol;

        if(gol=="a");
        {
        gaji=1000000;
        cout<<"masukan jumlah keluarga = ";}
        if(kel>2)
        { tun=gaji/2 + 100000;}
        else
        {tun=100000;}
        cout<<"anda mendapatkan tunjangan sebesar = ";
        tg=gaji+tun;
        cout<<"Total Gaji =" +tg ;

        if(gol=="b");
        {
        gaji=2000000;
        cout<<"masukan jumlah keluarga = ";}
        if(kel>2)
        { tun=gaji/2 + 100000;}
        else
        {tun=200000;}
        cout<<"anda mendapatkan tunjangan sebesar = ";
        tg=gaji+tun;
        cout<<"Total Gaji =" +tg ;

    return 0;
}
