#include <iostream>
#include <string>
using namespace std;

//Najwa Areefa Ghaisani_103122400028

struct nilaiSTD {
    float clo1;          
    float clo2;          
    float clo3;          
    float clo4;          
    float nilai_akhir;   
    string indeks_nilai; 
};

nilaiSTD simpanNilaiCLO(float clo1, float clo2, float clo3, float clo4) {
    nilaiSTD nilai_std;
    nilai_std.clo1 = clo1;
    nilai_std.clo2 = clo2;
    nilai_std.clo3 = clo3;
    nilai_std.clo4 = clo4;
    return nilai_std;
}

float hitungNilaiAkhir(float clo1, float clo2, float clo3, float clo4) {
    float nilai_akhir = (0.30 * clo1) + (0.30 * clo2) + (0.20 * clo3) + (0.20 * clo4);
    return nilai_akhir;
}

string menentukanIndeksNilai(float nilaiAkhir) {
    string indeks;
    if (nilaiAkhir > 80) {
        indeks = "A";
    } else if (nilaiAkhir > 70 && nilaiAkhir <= 80) {
        indeks = "AB";
    } else if (nilaiAkhir > 65 && nilaiAkhir <= 70) {
        indeks = "B";
    } else if (nilaiAkhir > 60 && nilaiAkhir <= 65) {
        indeks = "BC";
    } else if (nilaiAkhir > 50 && nilaiAkhir <= 60) {
        indeks = "C";
    } else if (nilaiAkhir > 40 && nilaiAkhir <= 50) {
        indeks = "D";
    } else {
        indeks = "E";
    }
    return indeks;
}

//Najwa Areefa Ghaisani_103122400028

int main() {
    float nilaiCLO1, nilaiCLO2, nilaiCLO3, nilaiCLO4;
    cout << "Silakan input nilai CLO 1: ";
    cin >> nilaiCLO1;
    cout << "Silakan input nilai CLO 2: ";
    cin >> nilaiCLO2;
    cout << "Silakan input nilai CLO 3: ";
    cin >> nilaiCLO3;
    cout << "Silakan input nilai CLO 4: ";
    cin >> nilaiCLO4;
    cout << " \n<<< Menampilkan hasil >>> " << endl;
   


    nilaiSTD mhs1 = simpanNilaiCLO(nilaiCLO1, nilaiCLO2, nilaiCLO3, nilaiCLO4);

    mhs1.nilai_akhir = hitungNilaiAkhir(mhs1.clo1, mhs1.clo2, mhs1.clo3, mhs1.clo4);
    mhs1.indeks_nilai = menentukanIndeksNilai(mhs1.nilai_akhir);

    cout << "Nilai CLO 1: " << mhs1.clo1 << endl;
    cout << "Nilai CLO 2: " << mhs1.clo2 << endl;
    cout << "Nilai CLO 3: " << mhs1.clo3 << endl;
    cout << "Nilai CLO 4: " << mhs1.clo4 << endl;
    cout << "Nilai Akhir: " << mhs1.nilai_akhir << endl;
    cout << "Indeks Nilai: " << mhs1.indeks_nilai << endl;

    return 0;
}

//Najwa Areefa Ghaisani_103122400028
