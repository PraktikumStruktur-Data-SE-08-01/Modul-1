#include <iostream>
#include <string>
using namespace std;

struct nilaiSTD {
    float CLO1;
    float CLO2;
    float CLO3;
    float CLO4;
    float nilaiAkhir;
    string indeksNilai;
};

nilaiSTD mahasiswa1;
nilaiSTD mahasiswa2;

float hitungNilaiAkhir(float clo1, float clo2, float clo3, float clo4) {
    return 0.3*clo1 + 0.3*clo2 + 0.2*clo3 + 0.2*clo4;
}

string hitungIndeksNilai(float nilai) {
    if (nilai > 80) return "A";
    else if (nilai > 70 && nilai <= 80) return "AB";
    else if (nilai > 65 && nilai <= 70) return "B";
    else if (nilai > 60 && nilai <= 65) return "BC";
    else if (nilai > 50 && nilai <= 60) return "C";
    else if (nilai > 40 && nilai <= 50) return "D";
    else return "E";
}

nilaiSTD dataNilaiSTD(float clo1, float clo2, float clo3, float clo4) {
    nilaiSTD temporary_nilaiSTD;
    temporary_nilaiSTD.CLO1 = clo1;
    temporary_nilaiSTD.CLO2 = clo2;
    temporary_nilaiSTD.CLO3 = clo3;
    temporary_nilaiSTD.CLO4 = clo4;
    temporary_nilaiSTD.nilaiAkhir = hitungNilaiAkhir(clo1, clo2, clo3, clo4);
    temporary_nilaiSTD.indeksNilai = hitungIndeksNilai(temporary_nilaiSTD.nilaiAkhir);
    return temporary_nilaiSTD;
}


int main() {
    float CLO1, CLO2, CLO3, CLO4;
    cout << "Masukkan nilai CLO-1: ";
    cin >> CLO1;
    cout << "Masukkan nilai CLO-2: ";
    cin >> CLO2;
    cout << "Masukkan nilai CLO-3: ";
    cin >> CLO3;
    cout << "Masukkan nilai CLO-4: ";
    cin >> CLO4;
    mahasiswa1 = dataNilaiSTD(CLO1, CLO2, CLO3, CLO4);

    cout << "Nilai Akhir: " << mahasiswa1.nilaiAkhir << endl;
    cout << "Indeks Nilai: " << mahasiswa1.indeksNilai << endl;

    return 0;
}
