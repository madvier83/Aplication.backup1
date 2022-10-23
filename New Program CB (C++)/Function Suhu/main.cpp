#include <iostream>

using namespace std;

int farenheit_int(int num);
float farenheit_float(float num);
double farenheit_double(double num);

int main()
{
    int F, C;
    float F1 ,C1;
    double F2,C2;

    cout << "\n Masukan Suhu Dalam Farenheit : ";
    cin >> F;
    F1 = F;
    F2 = F;

    cout << "\n Suhu dalam celcius adalah : \n " << endl;

    C = farenheit_int(F);
    cout << " Hasil dari int    = " << C << endl;
    C1 = farenheit_float(F1);
    cout << " Hasil dari float  = " << C1 << endl;
    C2 = farenheit_double(F2);
    cout << " Hasil dari double = " << C2 << endl;
}
int farenheit_int(int num) {
    int hasil;

    hasil = (num - 32) * 5 / 9;
    return (hasil);
}
float farenheit_float(float num) {
    float hasil;

    hasil = (num - 32) * 5 / 9;
    return (hasil);
}
double farenheit_double(double num) {
    double hasil;

    hasil = (num - 32) * 5 / 9;
    return (hasil);
}
