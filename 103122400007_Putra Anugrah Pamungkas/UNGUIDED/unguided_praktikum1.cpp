#include <iostream>
#include <string>

using namespace std;

struct nilaiSTD {
    float clo1, clo2, clo3, clo4;
    float nilaiAkhir;
    string indeksNilai;
};

nilaiSTD nilaiMahasiswa1;
nilaiSTD nilaiMahasiswa2;

float countNilaiAkhir(float clo1,float  clo2,float  clo3,float clo4){
    return 0.30 * clo1 + 0.30 * clo2 + 0.20 * clo3 + 0.20 * clo4;
}

string menentukanIndeksNilai(float nilaiAkhir){
    string indeks;
     if (nilaiAkhir > 80)
    {
        return "A";
    } else if (nilaiAkhir <= 80 && nilaiAkhir > 70)
    {
        return "AB";
    }else if (nilaiAkhir <= 70 && nilaiAkhir > 65)
    {
        return "B";
    } else if (nilaiAkhir <= 65 && nilaiAkhir > 60)
    {
        return "BC";
    } else if (nilaiAkhir <= 60 && nilaiAkhir > 50)
    {
        return "C";
    } else if (nilaiAkhir <= 50 && nilaiAkhir > 40)
    {
        return "D";
    } else return "E";
}

nilaiSTD dataNilaiSTD(float clo1,float  clo2,float  clo3,float clo4){
    nilaiSTD nilaiData;

    nilaiData.clo1 = clo1;
    nilaiData.clo2 = clo2;
    nilaiData.clo3 = clo3;
    nilaiData.clo4 = clo4;

    nilaiData.nilaiAkhir = countNilaiAkhir(clo1, clo2, clo3, clo4);
    nilaiData.indeksNilai = menentukanIndeksNilai(nilaiData.nilaiAkhir);

    return nilaiData;
}

int main(){
    float clo1, clo2, clo3, clo4;
    cout << "Masukkan nilai CLO 1 sampa CLO 4" << endl;
    cout << "CLO 1 = ";
    cin >> clo1;
    cout << "CLO 2 = ";
    cin >> clo2;
    cout << "CLO 3 = ";
    cin >> clo3;
    cout << "CLO 4 = ";
    cin >> clo4;

    nilaiMahasiswa1 = dataNilaiSTD(clo1, clo2, clo3, clo4);
    cout << "Nilai akhir mahasiswa = " << nilaiMahasiswa1.nilaiAkhir << endl;
    cout << "Indeks akhir nilai mahasiswa = " << nilaiMahasiswa1.indeksNilai << endl;

    return 0;
}