#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int nilai,hasil;
    cout << "menentukan ganjil dan genap";
    cout << "masukan nilai = ";
    cin >> nilai;
    hasil = nilai%2;
    cout << "hasilnya adalah = ";
    if (hasil == 0)
        cout << "GENAP";
    else
        cout << "ganjil";
    cout << "apakah anda ingin memasukan nilai lagi? Masukan 'Y' untuk mengulang dan 'n' untuk berhenti\n pilihan anda : ";cin >>
pilihan;
}while(pilihan =='Y');

    return 0;
}
