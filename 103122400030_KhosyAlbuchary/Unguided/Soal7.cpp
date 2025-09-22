#include <iostream>
#include <string>
using namespace std;

string cariIndeks(float akhir) {
    if (akhir >= 85) return "A";
    else if (akhir >= 80) return "AB";
    else if (akhir >= 70) return "B";
    else if (akhir >= 65) return "BC";
    else if (akhir >= 55) return "C";
    else if (akhir >= 45) return "D";
    else return "E";
}

int main() {
    cout << "[SOAL 7] Menentukan Indeks Nilai" << endl;
    float nilai;
    cout << "Masukkan nilai akhir: ";
    cin >> nilai;
    cout << "Indeks yang diperoleh = " << cariIndeks(nilai) << endl;
    return 0;
}
