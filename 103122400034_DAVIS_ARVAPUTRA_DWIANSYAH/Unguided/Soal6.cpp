#include <iostream>
using namespace std;

// Bentukan nilaiSTD
struct nilaiSTD {
    float clo1;
    float clo2;
    float clo3;
    float clo4;
};

// Function untuk menghitung nilai akhir MK
float hitungNilaiAkhir(nilaiSTD data) {
    float hasil;
    hasil = (0.3 * data.clo1) + (0.3 * data.clo2) + (0.2 * data.clo3) + (0.2 * data.clo4);
    return hasil;
}

int main() {
    nilaiSTD mahasiswa;

    cout << "Masukkan nilai CLO 1: ";
    cin >> mahasiswa.clo1;
    cout << "Masukkan nilai CLO 2: ";
    cin >> mahasiswa.clo2;
    cout << "Masukkan nilai CLO 3: ";
    cin >> mahasiswa.clo3;
    cout << "Masukkan nilai CLO 4: ";
    cin >> mahasiswa.clo4;

    float nilaiAkhir = hitungNilaiAkhir(mahasiswa);

    cout << "\n=== Hasil Nilai Akhir MK Struktur Data ===" << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;

    return 0;
}
