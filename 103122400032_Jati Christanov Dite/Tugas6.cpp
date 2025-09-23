#include <iostream>
using namespace std;


float hitungNilaiAkhir(float CLO1, float CLO2, float CLO3, float CLO4) {
    float nilaiAkhir;
    nilaiAkhir = (0.3 * CLO1) + (0.3 * CLO2) + (0.2 * CLO3) + (0.2 * CLO4);
    return nilaiAkhir;
}

int main() {
    float c1, c2, c3, c4, hasil;

    cout << "Masukkan nilai CLO 1: ";
    cin >> c1;
    cout << "Masukkan nilai CLO 2: ";
    cin >> c2;
    cout << "Masukkan nilai CLO 3: ";
    cin >> c3;
    cout << "Masukkan nilai CLO 4: ";
    cin >> c4;

    hasil = hitungNilaiAkhir(c1, c2, c3, c4);

    cout << "Nilai akhir mata kuliah Struktur Data = " << hasil << endl;

    return 0;
}
