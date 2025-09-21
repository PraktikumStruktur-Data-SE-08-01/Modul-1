#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk menentukan indeks nilai
string tentukanIndeks(float nilaiAkhir) {
    if (nilaiAkhir >= 85) return "A";
    else if (nilaiAkhir >= 80) return "AB";
    else if (nilaiAkhir >= 70) return "B";
    else if (nilaiAkhir >= 65) return "BC";
    else if (nilaiAkhir >= 55) return "C";
    else if (nilaiAkhir >= 45) return "D";
    else return "E";
}

int main() {
    float nilaiAkhir;

    cout << "Masukkan nilai akhir: ";
    cin >> nilaiAkhir;

    string indeks = tentukanIndeks(nilaiAkhir);

    cout << "\n=== Hasil Penentuan Indeks Nilai ===" << endl;
    cout << "Nilai Akhir : " << nilaiAkhir << endl;
    cout << "Indeks Nilai: " << indeks << endl;

    return 0;
}
