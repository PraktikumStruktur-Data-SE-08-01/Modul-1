#include <iostream>
#include <string>
using namespace std;

struct nilaiSTD {
    float CLO1;
    float CLO2;
    float CLO3;
    float CLO4;
    float NilaiAkhir;
    string IndeksNilai;
};

nilaiSTD buatNilaiSTD(float CLO1, float CLO2, float CLO3, float CLO4) {
    nilaiSTD temp;
    temp.CLO1 = CLO1;
    temp.CLO2 = CLO2;
    temp.CLO3 = CLO3;
    temp.CLO4 = CLO4;
    temp.NilaiAkhir = 0;       
    temp.IndeksNilai = "";   
    return temp;
}

float hitungNilaiAkhir(float CLO1, float CLO2, float CLO3, float CLO4) {
    return (0.3 * CLO1) + (0.3 * CLO2) + (0.2 * CLO3) + (0.2 * CLO4);
}

string tentukanIndeks(float nilaiAkhir) {
    if (nilaiAkhir >= 85) return "A";
    else if (nilaiAkhir >= 80) return "AB";
    else if (nilaiAkhir >= 75) return "B";
    else if (nilaiAkhir >= 70) return "BC";
    else if (nilaiAkhir >= 65) return "C";
    else if (nilaiAkhir >= 60) return "D";
    else return "E";
}

int main() {
   
    nilaiSTD mhs1;
    float c1, c2, c3, c4;
    cout << "Masukkan nilai CLO-1 : "; cin >> c1;
    cout << "Masukkan nilai CLO-2 : "; cin >> c2;
    cout << "Masukkan nilai CLO-3 : "; cin >> c3;
    cout << "Masukkan nilai CLO-4 : "; cin >> c4;

    
    mhs1 = buatNilaiSTD(c1, c2, c3, c4);
    mhs1.NilaiAkhir = hitungNilaiAkhir(mhs1.CLO1, mhs1.CLO2, mhs1.CLO3, mhs1.CLO4);
    mhs1.IndeksNilai = tentukanIndeks(mhs1.NilaiAkhir);

    cout << "\n=== HASIL AKHIR MAHASISWA ===" << endl;
    cout << "CLO1         = " << mhs1.CLO1 << endl;
    cout << "CLO2         = " << mhs1.CLO2 << endl;
    cout << "CLO3         = " << mhs1.CLO3 << endl;
    cout << "CLO4         = " << mhs1.CLO4 << endl;
    cout << "Nilai Akhir  = " << mhs1.NilaiAkhir << endl;
    cout << "Indeks Nilai = " << mhs1.IndeksNilai << endl;

    return 0;
}