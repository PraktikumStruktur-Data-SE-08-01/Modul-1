#include <iostream>
using namespace std;
struct NilaiSTD {
    int CLO1, CLO2, CLO3, CLO4;
    float nilaiAkhir;
    string indeks;
};

NilaiSTD saveNum(int CLO1, int CLO2, int CLO3, int CLO4) {
    NilaiSTD nilai;
    nilai.CLO1 = CLO1;
    nilai.CLO2 = CLO2;
    nilai.CLO3 = CLO3;
    nilai.CLO4 = CLO4;
    return nilai;
}

float calculateFinalScore(int CLO1, int CLO2, int CLO3, int CLO4) {
    return (0.3 * CLO1) + (0.3 * CLO2) + (0.2 * CLO3) + (0.2 * CLO4);
}

string determineIndex(float nilaiAkhir) {
    if (nilaiAkhir > 80) return "A";
    else if (nilaiAkhir > 70 && nilaiAkhir <= 80) return "AB";
    else if (nilaiAkhir > 65 && nilaiAkhir <= 70) return "B";
    else if (nilaiAkhir > 60 && nilaiAkhir <= 65) return "BC";
    else if (nilaiAkhir > 50 && nilaiAkhir <= 60) return "C";
    else if (nilaiAkhir > 40 && nilaiAkhir <= 50) return "D";
    else return "E";
}

int main(){
    NilaiSTD Mhs1, Mhs2;
    int CLO1, CLO2, CLO3, CLO4;

    cout << "Masukan nilai CLO1: ";
    cin >> CLO1;
    cout << "Masukan nilai CLO2: ";
    cin >> CLO2;
    cout << "Masukan nilai CLO3: ";
    cin >> CLO3;
    cout << "Masukan nilai CLO4: ";
    cin >> CLO4;

    Mhs1 = saveNum(CLO1, CLO2, CLO3, CLO4);

    Mhs1.nilaiAkhir = calculateFinalScore(Mhs1.CLO1, Mhs1.CLO2, Mhs1.CLO3, Mhs1.CLO4);
    Mhs1.indeks = determineIndex(Mhs1.nilaiAkhir);

    cout << "Nilai Akhir: " << Mhs1.nilaiAkhir << endl;
    cout << "Indeks: " << Mhs1.indeks << endl;

    return 0;
}