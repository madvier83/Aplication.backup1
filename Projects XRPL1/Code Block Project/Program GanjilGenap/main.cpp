#include <iostream>

using namespace std;

int main()
{
    int A , B;

    cout<<"=== Program GanjilGenap ==="<<endl;
    cout<<"> Masukan Bilangan : ";
    cin>>A;

    B=A%2;

    if (B==1){
        cout<<A<<" Adalah Bilangan Ganjil "<<endl;
    } else {cout<<A<<" Adalah Bilangan Genap "<<endl;}

    return 0;
}
