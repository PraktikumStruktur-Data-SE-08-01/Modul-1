#include <iostream>
#include <string>
using namespace std;

// Daffa Aufany Febrianto_103122400029
struct nilaiSTD {
    float CLO1;        
    float CLO2;        
    float CLO3;        
    float CLO4;        
    float NilaiAkhir;  
    string IndeksNilai; 
};

int main() {
    nilaiSTD mahasiswa; 

    
    cout << "Masukkan nilai CLO1 (0-100): ";
    cin >> mahasiswa.CLO1;

    cout << "Masukkan nilai CLO2 (0-100): ";
    cin >> mahasiswa.CLO2;

    cout << "Masukkan nilai CLO3 (0-100): ";
    cin >> mahasiswa.CLO3;

    cout << "Masukkan nilai CLO4 (0-100): ";
    cin >> mahasiswa.CLO4;

    cout << "Masukkan nilai akhir (0-100): ";
    cin >> mahasiswa.NilaiAkhir;

    cout << "Masukkan indeks nilai (A/AB/B/BC/C/D/E): ";
    cin >> mahasiswa.IndeksNilai;

    
    cout << "\n=== Data Nilai Mahasiswa ===\n";
    cout << "CLO1: " << mahasiswa.CLO1 << endl;
    cout << "CLO2: " << mahasiswa.CLO2 << endl;
    cout << "CLO3: " << mahasiswa.CLO3 << endl;
    cout << "CLO4: " << mahasiswa.CLO4 << endl;
    cout << "Nilai Akhir: " << mahasiswa.NilaiAkhir << endl;
    cout << "Indeks Nilai: " << mahasiswa.IndeksNilai << endl;

    return 0;
}

