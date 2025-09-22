#include <iostream> //Rafael Putra Septava_103122400015
#include <string>
using namespace std;

struct NilaiSTD{
    float CLO1, CLO2, CLO3, CLO4;
};

NilaiSTD konversiNilaiSTD(float clo1, float clo2, float clo3, float clo4){
    NilaiSTD hasil;

    hasil.CLO1 = clo1;
    hasil.CLO2 = clo2;
    hasil.CLO3 = clo3;
    hasil.CLO4 = clo4;

    return hasil;
}

int main(){
    float clo1, clo2, clo3, clo4;

    cout<<"Masukkan nilai CLO1: ";
    cin>>clo1;
    cout<<"Masukkan nilai CLO2: ";
    cin>>clo2;
    cout<<"Masukkan nilai CLO3: ";
    cin>>clo3;
    cout<<"Masukkan nilai CLO4: ";
    cin>>clo4;

    NilaiSTD mahasiswa = konversiNilaiSTD(clo1, clo2, clo3, clo4);

    cout << "\n=== Hasil Konversi Nilai STD ===\n";
    cout << "CLO1: " << mahasiswa.CLO1 << endl;
    cout << "CLO2: " << mahasiswa.CLO2 << endl;
    cout << "CLO3: " << mahasiswa.CLO3 << endl;
    cout << "CLO4: " << mahasiswa.CLO4 << endl;

    return 0;
}
