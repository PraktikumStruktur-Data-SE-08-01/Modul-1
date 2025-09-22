#include <iostream>
using namespace std;

float hitungAkhir(float c1, float c2, float c3, float c4) {
    return (0.3*c1) + (0.3*c2) + (0.2*c3) + (0.2*c4);
}

int main() {
    cout << "[SOAL 6] Hitung Nilai Akhir Mahasiswa" << endl;
    float hasil = hitungAkhir(75, 82, 68, 90);
    cout << "Nilai Akhir dari CLO = " << hasil << endl;
    return 0;
}
