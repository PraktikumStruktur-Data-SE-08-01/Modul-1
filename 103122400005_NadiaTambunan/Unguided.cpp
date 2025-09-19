#include <iostream>
#include <string>
using namespace std;

// no. 1
struct nilaiSTD {
    double CLO1;
    double CLO2;
    double CLO3;
    double CLO4; // Nadia Tambunan 103122400005
    double nilaiAkhir;
    string indeksNilai;
};

int main() {
    // no. 2
    nilaiSTD mhs;

    // no. 3
    cout << "Masukkan nilai CLO-1 : ";
    cin >> mhs.CLO1;
    cout << "Masukkan nilai CLO-2 : ";
    cin >> mhs.CLO2;
    cout << "Masukkan nilai CLO-3 : ";
    cin >> mhs.CLO3;
    cout << "Masukkan nilai CLO-4 : ";
    cin >> mhs.CLO4; // Nadia Tambunan 103122400005

    // no. 4–5 : manggil function buatNilaiSTD
    mhs = buatNilaiSTD(mhs.CLO1, mhs.CLO2, mhs.CLO3, mhs.CLO4);

    cout << "\nHASIL PERHITUNGAN\n";
    cout << "Nilai Akhir   : " << mhs.nilaiAkhir << endl;
    cout << "Indeks Nilai  : " << mhs.indeksNilai << endl;

    return 0;
}

// no. 4 & 5
nilaiSTD buatNilaiSTD(double CLO1, double CLO2, double CLO3, double CLO4) {
    nilaiSTD data;
    data.CLO1 = CLO1;
    data.CLO2 = CLO2;
    data.CLO3 = CLO3;
    data.CLO4 = CLO4;

    // no. 5
    data.nilaiAkhir = hitungNilaiAkhir(CLO1, CLO2, CLO3, CLO4);
    data.indeksNilai = tentukanIndeks(data.nilaiAkhir);

    return data;
}

// no. 6
double hitungNilaiAkhir(double CLO1, double CLO2, double CLO3, double CLO4) {
    return (0.3 * CLO1) + (0.3 * CLO2) + (0.2 * CLO3) + (0.2 * CLO4);
}

// no. 7
string tentukanIndeks(double nilaiAkhir) {
    if (nilaiAkhir >= 85) return "A";
    else if (nilaiAkhir >= 80) return "AB";
    else if (nilaiAkhir >= 70) return "B";
    else if (nilaiAkhir >= 65) return "BC";
    else if (nilaiAkhir >= 55) return "C";
    else if (nilaiAkhir >= 40) return "D";
    else return "E";
}
