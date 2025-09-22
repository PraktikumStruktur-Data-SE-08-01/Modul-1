#include <iostream>
#include <string>
using namespace std;

struct nilaiSTD {
    float clo1, clo2, clo3, clo4;
    float nilaiAkhir;
    string indeks;
};

float hitungNilaiAkhir(float c1, float c2, float c3, float c4){
    return (0.3 * c1) + (0.3 * c2) + (0.2 * c3) + (0.2 * c4);
}

string tentukanIndeks(float nilai){
    if (nilai >= 85) return "A";
    else if (nilai >= 70) return "AB";
    else if (nilai >= 65) return "B";
    else if (nilai >= 65) return "BC";
    else if (nilai >= 55) return "C";
    else if (nilai >= 45) return "D";
    else return "E";
}

int main(){
    nilaiSTD mhs;

    cout << "Masukkan nilai CLO-1: "; cin >> mhs.clo1;
    cout << "Masukkan nilai CLO-2: "; cin >> mhs.clo2;
    cout << "Masukkan nilai CLO-3: "; cin >> mhs.clo3;
    cout << "Masukkan nilai CLO-4: "; cin >> mhs.clo4;

    mhs.nilaiAkhir = hitungNilaiAkhir(mhs.clo1, mhs.clo2, mhs.clo3, mhs.clo4);
    mhs.indeks = tentukanIndeks(mhs.nilaiAkhir);

    cout << "\n HASIL NILAI" << endl;
    cout << "Nilai Akhir: " << mhs.nilaiAkhir << endl;
    cout << "Indeks Nilai: " << mhs.indeks << endl;

    return 0;
}
