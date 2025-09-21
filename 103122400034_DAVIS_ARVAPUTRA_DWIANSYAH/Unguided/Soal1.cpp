#include <iostream>
#include <string>
using namespace std;

// deklarasi tipe bentukan
struct nilaiSTD {
    float CLO1, CLO2, CLO3, CLO4;
    float nilaiAkhir;
    string indeks;
};

// function untuk menghitung nilai akhir
float hitungNilaiAkhir(float c1, float c2, float c3, float c4) {
    return (0.3 * c1) + (0.3 * c2) + (0.2 * c3) + (0.2 * c4);
}

// function untuk menentukan indeks nilai
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
    nilaiSTD mhs; // deklarasi variable bertipe struct

    // input nilai CLO
    cout << "Masukkan nilai CLO-1 : ";
    cin >> mhs.CLO1;
    cout << "Masukkan nilai CLO-2 : ";
    cin >> mhs.CLO2;
    cout << "Masukkan nilai CLO-3 : ";
    cin >> mhs.CLO3;
    cout << "Masukkan nilai CLO-4 : ";
    cin >> mhs.CLO4;

    // hitung nilai akhir
    mhs.nilaiAkhir = hitungNilaiAkhir(mhs.CLO1, mhs.CLO2, mhs.CLO3, mhs.CLO4);

    // tentukan indeks
    mhs.indeks = tentukanIndeks(mhs.nilaiAkhir);

    // tampilkan hasil
    cout << "\n===== HASIL NILAI MAHASISWA =====\n";
    cout << "CLO-1       : " << mhs.CLO1 << endl;
    cout << "CLO-2       : " << mhs.CLO2 << endl;
    cout << "CLO-3       : " << mhs.CLO3 << endl;
    cout << "CLO-4       : " << mhs.CLO4 << endl;
    cout << "Nilai Akhir : " << mhs.nilaiAkhir << endl;
    cout << "Indeks Nilai: " << mhs.indeks << endl;

    return 0;
}
