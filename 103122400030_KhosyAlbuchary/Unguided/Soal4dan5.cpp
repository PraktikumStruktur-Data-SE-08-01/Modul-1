#include <iostream>
#include <string>
using namespace std;

struct nilaiSTD {
    float CLO1, CLO2, CLO3, CLO4;
    float nilaiAkhir;
    string indeksNilai;
};

nilaiSTD buatData(float c1, float c2, float c3, float c4) {
    nilaiSTD temp;
    temp.CLO1 = c1;
    temp.CLO2 = c2;
    temp.CLO3 = c3;
    temp.CLO4 = c4;
    temp.nilaiAkhir = 0;
    temp.indeksNilai = "Belum dihitung";
    return temp;
}

int main() {
    nilaiSTD mhs = buatData(75, 82, 68, 90);
    cout << "[SOAL 4dan5] Data Mahasiswa berhasil dibuat:" << endl;
    cout << "CLO1=" << mhs.CLO1 << ", CLO2=" << mhs.CLO2
         << ", CLO3=" << mhs.CLO3 << ", CLO4=" << mhs.CLO4 << endl;
    return 0;
}
