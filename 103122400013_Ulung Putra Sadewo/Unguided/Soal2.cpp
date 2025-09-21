#include <iostream>
#include <string>

using namespace std;

struct NilaiSTD {
    float clo1;
    float clo2;
    float clo3;
    float clo4;
    float nilaiAkhir;
    string indeks;
};

int main (){
    NilaiSTD mahasiswa_satu;
    NilaiSTD mahasiswa_dua;

    // contoh input nilainya
    cout << "Masukan Nilai akhir untuk mahasiswa satu : ";
    cin >> mahasiswa_satu.nilaiAkhir;
    cout << "Masukan Nilai akhir untuk mahasiswa dua : ";
    cin >> mahasiswa_dua.nilaiAkhir;

    cout << "\nNilai berhasil disimpan" << endl;
    cout <<"Nilai akhir mahasiswa 1 : " << mahasiswa_satu.nilaiAkhir << endl;
    cout <<"Nilai akhir mahasiswa 2 : " << mahasiswa_dua.nilaiAkhir << endl;

    return 0;

}