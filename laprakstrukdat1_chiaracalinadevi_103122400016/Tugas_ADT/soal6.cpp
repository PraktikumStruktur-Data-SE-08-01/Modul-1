#include <iostream>
using namespace std;

float hitungNilaiAkhir(float c1, float c2, float c3, float c4) {
    return (0.3 * c1) + (0.3 * c2) + (0.2 * c3) + (0.2 * c4);
}

int main() {
    float c1=80, c2=90, c3=70, c4=60;
    float nilaiAkhir = hitungNilaiAkhir(c1, c2, c3, c4);

    cout << "Nilai akhir: " << nilaiAkhir << endl;
    return 0;
}
