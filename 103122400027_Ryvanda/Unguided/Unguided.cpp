#include <iostream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

struct NilaiSTD {
    float CLO1;
    float CLO2;
    float CLO3;
    float CLO4;
    float nilai_akhir;
    string indeks;
};

NilaiSTD createNilaiSTD(float clo1, float clo2, float clo3, float clo4);
float hitungNilaiAkhir(float clo1, float clo2, float clo3, float clo4);
string tentukanIndeks(float nilai);

int main() {

    NilaiSTD mahasiswa1, mahasiswa2;
    
    float inputCLO1, inputCLO2, inputCLO3, inputCLO4;

    cout << "===== Program Perhitungan Nilai Mahasiswa =====" << endl;
    cout << "Masukkan nilai CLO-1: ";
    cin >> inputCLO1;
    cout << "Masukkan nilai CLO-2: ";
    cin >> inputCLO2;
    cout << "Masukkan nilai CLO-3: ";
    cin >> inputCLO3;
    cout << "Masukkan nilai CLO-4: ";
    cin >> inputCLO4;
    cout << "===============================================" << endl << endl;

    mahasiswa1 = createNilaiSTD(inputCLO1, inputCLO2, inputCLO3, inputCLO4);
    mahasiswa1.nilai_akhir = hitungNilaiAkhir(mahasiswa1.CLO1, mahasiswa1.CLO2, mahasiswa1.CLO3, mahasiswa1.CLO4);
    mahasiswa1.indeks = tentukanIndeks(mahasiswa1.nilai_akhir);

    cout << "===== Hasil Perhitungan Nilai =====" << endl;
    cout << "Nilai CLO 1: " << mahasiswa1.CLO1 << endl;
    cout << "Nilai CLO 2: " << mahasiswa1.CLO2 << endl;
    cout << "Nilai CLO 3: " << mahasiswa1.CLO3 << endl;
    cout << "Nilai CLO 4: " << mahasiswa1.CLO4 << endl;
    
    cout << fixed << setprecision(2); 
    cout << "---------------------------------" << endl;
    cout << "Nilai Akhir  : " << mahasiswa1.nilai_akhir << endl;
    cout << "Indeks Nilai : " << mahasiswa1.indeks << endl;
    cout << "===================================" << endl;

    cout << "\nTekan tombol apapun untuk keluar...";
    getch(); 

    return 0;
}


NilaiSTD createNilaiSTD(float clo1, float clo2, float clo3, float clo4) {
    NilaiSTD dataMahasiswa;
    dataMahasiswa.CLO1 = clo1;
    dataMahasiswa.CLO2 = clo2;
    dataMahasiswa.CLO3 = clo3;
    dataMahasiswa.CLO4 = clo4;
    dataMahasiswa.nilai_akhir = 0;
    dataMahasiswa.indeks = "";
    return dataMahasiswa;
}

float hitungNilaiAkhir(float clo1, float clo2, float clo3, float clo4) {

    float hasil_akhir = (0.30 * clo1) + (0.30 * clo2) + (0.20 * clo3) + (0.20 * clo4);
    return hasil_akhir;
}

string tentukanIndeks(float nilai) {
   
    if (nilai > 80) {
        return "A";
    } else if (nilai > 70 && nilai <= 80) {
        return "AB";
    } else if (nilai > 65 && nilai <= 70) {
        return "B";
    } else if (nilai > 60 && nilai <= 65) {
        return "BC";
    } else if (nilai > 50 && nilai <= 60) {
        return "C";
    } else if (nilai > 40 && nilai <= 50) {
        return "D";
    } else { 
        return "E";
    }
}