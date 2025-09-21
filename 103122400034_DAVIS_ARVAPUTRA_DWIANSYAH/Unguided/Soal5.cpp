#include <iostream>
using namespace std;

// Bentukan nilaiSTD
struct nilaiSTD {
    float clo1;
    float clo2;
    float clo3;
    float clo4;
    float rataRata;
};

// Function hitungNilaiSTD
nilaiSTD hitungNilaiSTD(float clo1, float clo2, float clo3, float clo4) {
    nilaiSTD hasil;
    // Menyimpan nilai masing-masing CLO
    hasil.clo1 = clo1;
    hasil.clo2 = clo2;
    hasil.clo3 = clo3;
    hasil.clo4 = clo4;
    // Menghitung rata-rata nilai CLO
    hasil.rataRata = (clo1 + clo2 + clo3 + clo4) / 4;
    return hasil;
}

int main() {
    float n1, n2, n3, n4;

    cout << "Masukkan nilai CLO 1: ";
    cin >> n1;
    cout << "Masukkan nilai CLO 2: ";
    cin >> n2;
    cout << "Masukkan nilai CLO 3: ";
    cin >> n3;
    cout << "Masukkan nilai CLO 4: ";
    cin >> n4;

    // Memanggil function hitungNilaiSTD
    nilaiSTD mahasiswa = hitungNilaiSTD(n1, n2, n3, n4);

    cout << "\n=== Hasil Pengolahan Nilai ===" << endl;
    cout << "CLO 1: " << mahasiswa.clo1 << endl;
    cout << "CLO 2: " << mahasiswa.clo2 << endl;
    cout << "CLO 3: " << mahasiswa.clo3 << endl;
    cout << "CLO 4: " << mahasiswa.clo4 << endl;
    cout << "Rata-rata Nilai: " << mahasiswa.rataRata << endl;

    return 0;
}
