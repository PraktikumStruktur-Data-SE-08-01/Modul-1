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

int main(){
    
    //contoh untuk mengisi nilai mahasiswa
    NilaiSTD mahasiswa_contoh;
    cout<< "Masukan Nilai untuk CLO 1 : ";
    cin >> mahasiswa_contoh.clo1;
    cout <<"\nNilai berhasil disimpan" << endl;

    cout<<"Nilai CLO 1 : " << mahasiswa_contoh.clo1 << endl;

    return 0;
}