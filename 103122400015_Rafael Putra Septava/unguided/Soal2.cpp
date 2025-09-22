#include <iostream> //Rafael Putra Septava_103122400015
#include <string>
using namespace std;

struct NilaiSTD{
    float CLO1;
    float CLO2;
    float CLO3;
    float CLO4;
    float nilaiAkhir;
    string indeksNilai;
};

int main(){
    NilaiSTD mahasiswa1, mahasiswa2;

    mahasiswa1.CLO1 = 85.5;
    mahasiswa1.CLO2 = 90.0;
    mahasiswa1.CLO3 = 88.0;
    mahasiswa1.CLO4 = 80.0;
    mahasiswa1.nilaiAkhir = 85.0;
    mahasiswa1.indeksNilai = "AB";

    mahasiswa2.CLO1 = 70.0;
    mahasiswa2.CLO2 = 65.5;
    mahasiswa2.CLO3 = 75.0;
    mahasiswa2.CLO4 = 68.0;
    mahasiswa2.nilaiAkhir = 70.0;
    mahasiswa2.indeksNilai = "C";

    cout << "Indeks Nilai mhs1: " << mahasiswa1.indeksNilai << endl;
    cout << "Indeks Nilai mhs2: " << mahasiswa2.indeksNilai << endl;

    return 0;
}
