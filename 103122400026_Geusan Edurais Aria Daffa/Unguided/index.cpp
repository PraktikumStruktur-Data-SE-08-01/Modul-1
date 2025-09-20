#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct NilaiSTD
{
    float clo1, clo2, clo3, clo4;
    float nilaiAkhir;
    string indeksNilai;
};

float hitungNilaiAkhir(float c1, float c2, float c3, float c4)
{
    return (0.30 * c1) +
           (0.30 * c2) + (0.20 * c3) + (0.20 * c4);
}

string tentukanIndeks(float nilai)
{
    if (nilai > 80)
        return "A";
    else if (nilai > 70)
        return "AB";
    else if (nilai > 65)
        return "B";
    else if (nilai > 60)
        return "BC";
    else if (nilai > 50)
        return "C";
    else if (nilai > 40)
        return "D";
    else
        return "E";
}

NilaiSTD prosesLengkapNilai(float c1, float c2, float c3, float c4)
{
    NilaiSTD hasil;

    hasil.clo1 = c1;
    hasil.clo2 = c2;
    hasil.clo3 = c3;
    hasil.clo4 = c4;

    hasil.nilaiAkhir = hitungNilaiAkhir(c1, c2, c3, c4);

    hasil.indeksNilai = tentukanIndeks(hasil.nilaiAkhir);

    return hasil;
}

int main()
{
    NilaiSTD mahasiswa1;

    float inputClo1, inputClo2, inputClo3, inputClo4;

    cout << "--- Program Input Nilai Mahasiswa ---" << endl;
    cout << "Masukkan nilai CLO-1: ";
    cin >> inputClo1;
    cout << "Masukkan nilai CLO-2: ";
    cin >> inputClo2;
    cout << "Masukkan nilai CLO-3: ";
    cin >> inputClo3;
    cout << "Masukkan nilai CLO-4: ";
    cin >> inputClo4;
    cout << endl;

    mahasiswa1 = prosesLengkapNilai(inputClo1, inputClo2, inputClo3, inputClo4);

    cout << "--- Laporan Nilai Akhir Mahasiswa ---" << endl;
    cout << fixed << setprecision(2);
    cout << "Nilai Akhir   : " << mahasiswa1.nilaiAkhir << endl;
    cout << "Indeks Mutu   : " << mahasiswa1.indeksNilai << endl;
    cout << "-------------------------------------" << endl;

    return 0;
}