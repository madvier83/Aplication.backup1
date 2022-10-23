#include <iostream>

using namespace std;

float luas(float x){
    float luas = 3.14 * x * x;
}

float keliling(float x) {
    float keliling = 2 * 3.14 * x;
    return keliling;
}

int main()
{
    float r ,L ,K;

    cout << " > Masukan Jari Jari Lingkaran : ";
    cin >> r;

    L = luas(r);
    cout << " - Luas     : " << L << endl;
    K = keliling(r);
    cout << " - Keliling : " << K << endl;

    return 0;
}
