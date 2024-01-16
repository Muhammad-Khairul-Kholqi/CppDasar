#include <iostream>
using namespace std;

int main ()
{
    float panjang, lebar, tinggi, luas;

     cout << "Ini Adalah Pemrograman C++ Untuk Menghitung Luas Balok" << endl;
     cout << "______________________________________________________" << endl;

     cout << "Masukan Panjang Balok: ";
     cin >> panjang;

     cout << "Masukan Lebar Balok: ";
     cin >> lebar;

     cout << "Masukan Tinggi Balok: ";
     cin >> tinggi;

     luas = ((2*panjang*lebar) + (2*panjang*tinggi) + (2*lebar*tinggi) );
     cout << endl;
     cout << "Luas Balok Adalah: " << luas << endl;
}

