#include <iostream>
#include <string>
using namespace std;

// Daffa Aufany Febrianto_103122400029
struct nilaiSTD {
    float CLO1;
    float CLO2;
    float CLO3;
    float CLO4;
    float NilaiAkhir;
    string IndeksNilai;
};

int main() {
    // Deklarasi dua variabel bertipe nilaiSTD
    nilaiSTD mhs1, mhs2;

    
    cout << "Masukkan nilai CLO1 mhs1: ";
    cin >> mhs1.CLO1;
    cout << "Masukkan nilai akhir mhs1: ";
    cin >> mhs1.NilaiAkhir;
    cout << "Masukkan indeks nilai mhs1: ";
    cin >> mhs1.IndeksNilai;

    cout << "\nMasukkan nilai CLO1 mhs2: ";
    cin >> mhs2.CLO1;
    cout << "Masukkan nilai akhir mhs2: ";
    cin >> mhs2.NilaiAkhir;
    cout << "Masukkan indeks nilai mhs2: ";
    cin >> mhs2.IndeksNilai;

    cout << "\n=== Data Mahasiswa 1 ===\n";
    cout << "CLO1: " << mhs1.CLO1 << endl;
    cout << "Nilai Akhir: " << mhs1.NilaiAkhir << endl;
    cout << "Indeks Nilai: " << mhs1.IndeksNilai << endl;

    cout << "\n=== Data Mahasiswa 2 ===\n";
    cout << "CLO1: " << mhs2.CLO1 << endl;
    cout << "Nilai Akhir: " << mhs2.NilaiAkhir << endl;
    cout << "Indeks Nilai: " << mhs2.IndeksNilai << endl;

    return 0;
}
