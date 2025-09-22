#include <iostream> //Rafael Putra Septava_103122400015
using namespace std;

float hitungNilaiAkhir(float CLO1, float CLO2, float CLO3, float CLO4){
    float nilaiAkhir;
    nilaiAkhir = (0.3 * CLO1) + (0.3 * CLO2) + (0.2 * CLO3) + (0.2 * CLO4);
    return nilaiAkhir;
}

int main(){
    float CLO1, CLO2, CLO3, CLO4;
    
    cout << "Masukkan nilai CLO1: ";
    cin >> CLO1;
    cout << "Masukkan nilai CLO2: ";
    cin >> CLO2;
    cout << "Masukkan nilai CLO3: ";
    cin >> CLO3;
    cout << "Masukkan nilai CLO4: ";
    cin >> CLO4;
    
    float hasil = hitungNilaiAkhir(CLO1, CLO2, CLO3, CLO4);
    
    cout << "Nilai Akhir MK Struktur Data: " << hasil << endl;
    
    return 0;
}
