#include <iostream>
#include <string>
using namespace std;

// Function untuk menentukan indeks nilai
string tentukanIndeks(float nilaiAkhir) {
    if (nilaiAkhir > 80) {
        return "A";
    } else if (nilaiAkhir > 70 && nilaiAkhir <= 80) {
        return "AB";
    } else if (nilaiAkhir > 65 && nilaiAkhir <= 70) {
        return "B";
    } else if (nilaiAkhir > 60 && nilaiAkhir <= 65) {
        return "BC";
    } else if (nilaiAkhir > 50 && nilaiAkhir <= 60) {
        return "C";
    } else if (nilaiAkhir > 40 && nilaiAkhir <= 50) {
        return "D";
    } else {
        return "E";
    }
}

int main() {
    float nilai;
    cout << "Masukkan nilai akhir: ";
    cin >> nilai;

    string indeks = tentukanIndeks(nilai);

    cout << "Indeks nilai anda adalah: " << indeks << endl;

    return 0;
}
