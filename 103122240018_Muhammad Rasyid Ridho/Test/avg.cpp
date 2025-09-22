#include <iostream>

using namespace std;

int main()
{
    int i, total = 0, jumlah = 0;
    do
    {
        cout << "Input angka : ";
        cin >> i;
        if (i != -999)
        {
            total = total + i;
            jumlah++;
            cout << i << endl;
            cout << jumlah << endl;
        };
    } while (i != -999);

    cout << "================";
    cout << "Total \t\t: " << total << endl;
    cout << "Jumlah \t\t: " << jumlah << endl;

    cout << "Rata-Rata\t: " << total / jumlah;

    cout << "\n103122400018 - Muhammad Rasyid Ridho" << endl;
}