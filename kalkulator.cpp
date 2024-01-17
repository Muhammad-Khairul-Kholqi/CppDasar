#include <iostream>
using namespace std;

int main() {
    float nilai1,nilai2,hasil;
    char aritmatika;

    cout << "Ini adalah kalkulator sederhana \n \n ";

    cout << "Masukan angka pertama: ";
    cin >> nilai1;

    cout << "Pilih operator +, -, /, *: ";
    cin >> aritmatika;
    
    cout << "Masukann angka kedua: ";
    cin >> nilai2;

    if (aritmatika == '+' ) {
        hasil = nilai1 + nilai2;
    } else if (aritmatika == '-' ) {
        hasil = nilai1 - nilai2;
    } else if (aritmatika == '/' ) {
        hasil = nilai1 / nilai2;
    } else if (aritmatika == '*' ) {
        hasil = nilai1 * nilai2;
    } else {
        cout << "Operator yang kamu pilih salah";
    }

    cout << "Hasilnya adalah: "<< hasil;



}
