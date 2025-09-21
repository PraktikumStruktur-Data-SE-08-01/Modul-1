#include <iostream>
#include <string>
using namespace std;

// Daffa Aufany Febrianto_103122400029
string konversiKeIndeks(float nilaiAkhir) {
    if (nilaiAkhir > 80) {
        return "A";
    } else if (nilaiAkhir > 70 && nilaiAkhir <= 80) {
        return "AB";
    } else if (nilaiAkhir > 65 && nilaiAkhir <= 70) {
        return "B";
    } else if (nilaiAkhir > 60 && nilaiAkhir <= 65) {
        return "BC";
    } else if (nilaiAkhir > 50 && nilaiAkhir <= 60) {
        return "C";
    } else if (nilaiAkhir > 40 && nilaiAkhir <= 50) {
        return "D";
    } else {
        return "E";
    }
}

int main() {
    float testNilai[] = {85, 75, 68, 63, 55, 45, 35};
    
    cout << "HASIL KONVERSI NILAI KE INDEKS MUTU" << endl;
    cout << "===================================" << endl;
    
    for (int i = 0; i < 7; i++) {
        string indeks = konversiKeIndeks(testNilai[i]);
        cout << "Nilai " << testNilai[i] << " -> Indeks: " << indeks << endl;
    }
    
    return 0;
}