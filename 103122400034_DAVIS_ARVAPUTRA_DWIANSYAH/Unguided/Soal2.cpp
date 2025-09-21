#include <iostream>
#include <string>
using namespace std;
// DAVIS ARVAPUTRA DWIANSYAH
// Deklarasi tipe bentuk
struct nilaiSTD {
    float CLO1, CLO2, CLO3, CLO4; // nilai CLO 1-4
    float nilaiAkhir;             // nilai akhir
    string indeks;                // indeks huruf (A, AB, B, dst.)
};

int main() {
    nilaiSTD mahasiswa1;
    nilaiSTD mahasiswa2;

    // Contoh
    mahasiswa1.CLO1 = 85;
    mahasiswa1.CLO2 = 90;
    mahasiswa1.CLO3 = 80;
    mahasiswa1.CLO4 = 75;
    mahasiswa1.nilaiAkhir = 82.5;
    mahasiswa1.indeks = "AB";

    mahasiswa2.CLO1 = 70;
    mahasiswa2.CLO2 = 65;
    mahasiswa2.CLO3 = 60;
    mahasiswa2.CLO4 = 75;
    mahasiswa2.nilaiAkhir = 67.5;
    mahasiswa2.indeks = "BC";

    // tampilkan data untuk memastikan variabel
    cout << "Data Mahasiswa 1:" << endl;
    cout << "Nilai Akhir = " << mahasiswa1.nilaiAkhir << ", Indeks = " << mahasiswa1.indeks << endl;

    cout << "Data Mahasiswa 2:" << endl;
    cout << "Nilai Akhir = " << mahasiswa2.nilaiAkhir << ", Indeks = " << mahasiswa2.indeks << endl;

    return 0;
}
