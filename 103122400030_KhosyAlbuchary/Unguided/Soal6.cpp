#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct NilaiSTD {
    float clo1;
    float clo2;
    float clo3;
    float clo4;
    float nilaiAkhir;
    string indeks;
};

float hitungNilaiAkhir(NilaiSTD dataMhs) {
    return (0.30 * dataMhs.clo1) + (0.30 * dataMhs.clo2) + (0.20 * dataMhs.clo3) + (0.20 * dataMhs.clo4);
}

int main() {
    NilaiSTD mahasiswa;
    
    cout << "--- Input 4 Nilai CLO untuk Dihitung Nilai Akhirnya ---" << endl;
    cout << "CLO 1: "; cin >> mahasiswa.clo1;
    cout << "CLO 2: "; cin >> mahasiswa.clo2;
    cout << "CLO 3: "; cin >> mahasiswa.clo3;
    cout << "CLO 4: "; cin >> mahasiswa.clo4;

    
    float nilai_akhir_hasil = hitungNilaiAkhir(mahasiswa);
    
    cout << fixed << setprecision(2);
    cout << "\nHasil perhitungan nilai akhir: " << nilai_akhir_hasil << endl;

    return 0;
}