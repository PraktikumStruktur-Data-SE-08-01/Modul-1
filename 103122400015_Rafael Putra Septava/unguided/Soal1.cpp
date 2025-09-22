#include <iostream> //Rafael Putra Septava_103122400015
#include <string>
using namespace std;

struct NilaiSTD{
    float clo1;
    float clo2;
    float clo3;
    float clo4;
    float nilaiAkhir;
    string indeksNilai;
};

int main(){
    NilaiSTD mahasiswa;

    cout<<"Masukkan nilai CLO1 mahasiswa 1: ";
    cin>>mahasiswa.clo1;
    cout<<"Masukkan nilai CLO2 mahasiswa 1: ";
    cin>>mahasiswa.clo2;
    cout<<"Masukkan nilai CLO3 mahasiswa 1: ";
    cin>>mahasiswa.clo3;
    cout<<"Masukkan nilai CLO4 mahasiswa 1: ";
    cin>>mahasiswa.clo4;

    mahasiswa.nilaiAkhir = (mahasiswa.clo1 + mahasiswa.clo2 + mahasiswa.clo3 + mahasiswa.clo4) / 4;

    if(mahasiswa.nilaiAkhir >= 85) mahasiswa.indeksNilai = "A";
    else if(mahasiswa.nilaiAkhir >= 80) mahasiswa.indeksNilai = "AB";
    else if(mahasiswa.nilaiAkhir >= 70) mahasiswa.indeksNilai = "B";
    else if(mahasiswa.nilaiAkhir >= 65) mahasiswa.indeksNilai = "BC";
    else if(mahasiswa.nilaiAkhir >= 60) mahasiswa.indeksNilai = "C";
    else if(mahasiswa.nilaiAkhir >= 50) mahasiswa.indeksNilai = "D";
    else mahasiswa.indeksNilai = "E";

    cout<<"\n=== Hasil Mahasiswa 1 ==="<<endl;
    cout<<"Nilai Akhir: " << mahasiswa.nilaiAkhir<<endl;
    cout<<"Indeks Nilai: " << mahasiswa.indeksNilai<<endl;

    return 0;
}
