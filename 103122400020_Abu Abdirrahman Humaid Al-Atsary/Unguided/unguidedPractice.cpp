#include <iostream>
#include <string>
using namespace std;

struct nilaiSTD {
    float CLO1;
    float CLO2;
    float CLO3;
    float CLO4;
    float nilaiAkhir;
    string indeksNilai;
};

nilaiSTD simpanNilai(float c1, float c2, float c3, float c4) {
    nilaiSTD data;
    data.CLO1 = c1;
    data.CLO2 = c2;
    data.CLO3 = c3;
    data.CLO4 = c4;
    data.nilaiAkhir = 0;     
    data.indeksNilai = "";    
    return data;
}

float hitungNilaiAkhir(float c1, float c2, float c3, float c4) {
    return (0.3f * c1) + (0.3f * c2) + (0.2f * c3) + (0.2f * c4);
}

string tentukanIndeks(float nilaiAkhir) {
    if (nilaiAkhir >= 85) return "A";
    else if (nilaiAkhir >= 80) return "AB";
    else if (nilaiAkhir >= 70) return "B";
    else if (nilaiAkhir >= 65) return "BC";
    else if (nilaiAkhir >= 55) return "C";
    else if (nilaiAkhir >= 40) return "D";
    else return "E";
}

int main() {
    nilaiSTD mhs1, mhs2;

    float c1, c2, c3, c4;
    cout << "Masukkan nilai CLO-1 : ";
    cin >> c1;
    cout << "Masukkan nilai CLO-2 : ";
    cin >> c2;
    cout << "Masukkan nilai CLO-3 : ";
    cin >> c3;
    cout << "Masukkan nilai CLO-4 : ";
    cin >> c4;

    mhs1 = simpanNilai(c1, c2, c3, c4);

    mhs1.nilaiAkhir = hitungNilaiAkhir(mhs1.CLO1, mhs1.CLO2, mhs1.CLO3, mhs1.CLO4);
    mhs1.indeksNilai = tentukanIndeks(mhs1.nilaiAkhir);

    cout << "\n=== HASIL PERHITUNGAN ===" << endl;
    cout << "CLO1        : " << mhs1.CLO1 << endl;
    cout << "CLO2        : " << mhs1.CLO2 << endl;
    cout << "CLO3        : " << mhs1.CLO3 << endl;
    cout << "CLO4        : " << mhs1.CLO4 << endl;
    cout << "Nilai Akhir : " << mhs1.nilaiAkhir << endl;
    cout << "Indeks Nilai: " << mhs1.indeksNilai << endl;

    return 0;
}
