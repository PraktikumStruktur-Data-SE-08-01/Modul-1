#include <iostream>
#include <string>
using namespace std;

struct nilaiSTD {
    float CLO1, CLO2, CLO3, CLO4, nilaiAkhir;
    string indeksNilai;
};

nilaiSTD simpanNilai(float c1, float c2, float c3, float c4) {
    nilaiSTD mhs;
    mhs.CLO1 = c1;
    mhs.CLO2 = c2;
    mhs.CLO3 = c3;
    mhs.CLO4 = c4;
    mhs.nilaiAkhir = 0;  
    mhs.indeksNilai = "";
    return mhs;
}

int main() {
    nilaiSTD mahasiswa = simpanNilai(80, 90, 70, 60);

    cout << "Data tersimpan:" << endl;
    cout << "CLO-1: " << mahasiswa.CLO1 << endl;
    cout << "CLO-2: " << mahasiswa.CLO2 << endl;
    cout << "CLO-3: " << mahasiswa.CLO3 << endl;
    cout << "CLO-4: " << mahasiswa.CLO4 << endl;

    return 0;
}
