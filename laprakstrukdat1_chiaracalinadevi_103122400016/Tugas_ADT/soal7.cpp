#include <iostream>
#include <string>
using namespace std;

string tentukanIndeks(float nilaiAkhir) {
    if (nilaiAkhir >= 85) return "A";
    else if (nilaiAkhir >= 80) return "AB";
    else if (nilaiAkhir >= 70) return "B";
    else if (nilaiAkhir >= 65) return "BC";
    else if (nilaiAkhir >= 55) return "C";
    else if (nilaiAkhir >= 40) return "D";
    else return "E";
}

int main() {
    float nilaiAkhir = 78;
    string indeks = tentukanIndeks(nilaiAkhir);

    cout << "Nilai akhir: " << nilaiAkhir << endl;
    cout << "Indeks nilai: " << indeks << endl;
    return 0;
}
