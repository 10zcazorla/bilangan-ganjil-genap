#include <iostream>
using namespace std;

int main()
{
    int nilai,hasil;
    cout << "menentukan ganjil dan genap\n";
    cout << "masukan nilai = ";
    cin >> nilai;
    hasil = nilai%2;
    cout << "hasilnya adalah = ";
    if (hasil == 0)
        cout << "GENAP";
    else
        cout << "ganjil";


    return 0;
}
