#include <iostream>
#include <string>
using namespace std;

double hitungNilaiAkhir(double CLO1, double CLO2, double CLO3, double CLO4) {
    return CLO1 * 0.3 + CLO2 * 0.3 + CLO3 * 0.2 + CLO4 * 0.2;
}

string tentukanIndeks(double nilaiAkhir) {
    if (nilaiAkhir > 80.0) return "A";
    else if (nilaiAkhir > 70.0) return "AB";
    else if (nilaiAkhir > 65.0) return "B";
    else if (nilaiAkhir > 60.0) return "BC";
    else if (nilaiAkhir > 50.0) return "C";
    else if (nilaiAkhir > 40.0) return "D";
    else return "E";
}

int main() {
    double CLO1, CLO2, CLO3, CLO4;
    cout << "Masukkan nilai CLO-1 : "; cin >> CLO1;
    cout << "Masukkan nilai CLO-2 : "; cin >> CLO2;
    cout << "Masukkan nilai CLO-3 : "; cin >> CLO3;
    cout << "Masukkan nilai CLO-4 : "; cin >> CLO4;

    double nilaiAkhir = hitungNilaiAkhir(CLO1, CLO2, CLO3, CLO4);
    string indeks = tentukanIndeks(nilaiAkhir);

    cout << "Nilai Akhir = " << nilaiAkhir << endl;
    cout << "Indeks / Mutu = " << indeks << endl;

    return 0;
}
