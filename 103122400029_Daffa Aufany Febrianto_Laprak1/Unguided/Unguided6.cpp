#include <iostream>
using namespace std;

// Daffa Aufany Febrianto_103122400029
struct nilaiSTD {
    float nilaiCLO1;
    float nilaiCLO2;
    float nilaiCLO3;
    float nilaiCLO4;
};

float hitungNilaiAkhir(nilaiSTD nilai) {
    float hasil;
    
    hasil = (0.30 * nilai.nilaiCLO1) + 
            (0.30 * nilai.nilaiCLO2) + 
            (0.20 * nilai.nilaiCLO3) + 
            (0.20 * nilai.nilaiCLO4);
    
    return hasil;
}

int main() {
    nilaiSTD nilaiMahasiswa;
    
    nilaiMahasiswa.nilaiCLO1 = 80;
    nilaiMahasiswa.nilaiCLO2 = 90;
    nilaiMahasiswa.nilaiCLO3 = 70;
    nilaiMahasiswa.nilaiCLO4 = 60;
    
    float nilaiAkhir = hitungNilaiAkhir(nilaiMahasiswa);
    
    cout << "Nilai CLO-1: " << nilaiMahasiswa.nilaiCLO1 << endl;
    cout << "Nilai CLO-2: " << nilaiMahasiswa.nilaiCLO2 << endl;
    cout << "Nilai CLO-3: " << nilaiMahasiswa.nilaiCLO3 << endl;
    cout << "Nilai CLO-4: " << nilaiMahasiswa.nilaiCLO4 << endl;
    cout << "==========================" << endl;
    cout << "Nilai Akhir MK STD: " << nilaiAkhir << endl;
    
    return 0;
}