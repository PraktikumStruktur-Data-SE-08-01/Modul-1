#include <iostream>
using namespace std;

int main() {
    float c1, c2, c3, c4;

    cout << "[SOAL 3] Input Nilai CLO Mahasiswa" << endl;
    cout << "----------------------------------" << endl;
    cout << "Masukkan CLO-1: "; cin >> c1;
    cout << "Masukkan CLO-2: "; cin >> c2;
    cout << "Masukkan CLO-3: "; cin >> c3;
    cout << "Masukkan CLO-4: "; cin >> c4;

    cout << "\nRekap Nilai:" << endl;
    cout << "CLO1 = " << c1 << ", CLO2 = " << c2
         << ", CLO3 = " << c3 << ", CLO4 = " << c4 << endl;
    return 0;
}
