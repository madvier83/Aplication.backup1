#include <iostream>

using namespace std;

int main(int argc,char **argv)
{

    cout<<endl;
    int max=10;
    int base=2000;
    int multi= rand()%base;
    int c[max];
    int x[max];
    c[0]=rand()%multi;
    x[0]=rand()%base;

    cout<<" angka acak : ";

        x[i]=(multi*x[i-1]+c[i-1])%base;
        c[i]=(multi*x[i-1]+c[i-1])/base;
        cout<<" "<<x[i]<<endl;






    cout<<endl;
    return 0;
}
