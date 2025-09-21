#include <iostream>
using namespace std;

// Daffa Aufany Febrianto_103122400029
struct nilaiSTD {
    float nilaiCLO1;
    float nilaiCLO2;
    float nilaiCLO3;
    float nilaiCLO4;
};

nilaiSTD konversiKeNilaiSTD(float clo1, float clo2, float clo3, float clo4) {
    nilaiSTD hasil;
    
    hasil.nilaiCLO1 = clo1;
    hasil.nilaiCLO2 = clo2;
    hasil.nilaiCLO3 = clo3;
    hasil.nilaiCLO4 = clo4;
    
    return hasil;
}

int main() {
    float clo1, clo2, clo3, clo4;
    
    cout << "Masukkan nilai CLO-1 : ";
    cin >> clo1;
    
    cout << "Masukkan nilai CLO-2 : ";
    cin >> clo2;
    
    cout << "Masukkan nilai CLO-3 : ";
    cin >> clo3;
    
    cout << "Masukkan nilai CLO-4 : ";
    cin >> clo4;
    
    nilaiSTD hasilKonversi = konversiKeNilaiSTD(clo1, clo2, clo3, clo4);
    
    cout << "\nHasil Konversi ke nilaiSTD:" << endl;
    cout << "CLO-1: " << hasilKonversi.nilaiCLO1 << endl;
    cout << "CLO-2: " << hasilKonversi.nilaiCLO2 << endl;
    cout << "CLO-3: " << hasilKonversi.nilaiCLO3 << endl;
    cout << "CLO-4: " << hasilKonversi.nilaiCLO4 << endl;
    
    return 0;
}