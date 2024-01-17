#include <iostream>
using namespace std;

int main()
{
    int data[1][12] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12},
    };

    for (int i = 0; i < 1; i++)
    {
        for (int a = 0; a < 12; a++)
        {
            cout << "masukan angka: ";
            cin >> data[i][a];
        }
    }
}
