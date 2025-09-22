#include <iostream> //Rafael Putra Septava_103122400015
#include <string>
using namespace std;

string nilaiIndeks(double nilaiAkhir){
    string indeks;

    if(nilaiAkhir > 80 && nilaiAkhir <= 100){
        indeks = "A";
    }else if (nilaiAkhir > 70 && nilaiAkhir <= 80){
        indeks = "AB";
    }else if (nilaiAkhir > 65 && nilaiAkhir <= 70){
        indeks = "B";
    }else if (nilaiAkhir > 60 && nilaiAkhir <= 65){
        indeks = "BC";
    }else if (nilaiAkhir > 50 && nilaiAkhir <= 60){
        indeks = "C";
    }else if (nilaiAkhir > 40 && nilaiAkhir <= 50){
        indeks = "D";
    }else {
        indeks = "E";
    }

    return indeks;
}

int main(){
    double nilai;
    cout << "Masukkan nilai akhir: ";
    cin >> nilai;

    string indeks = nilaiIndeks(nilai);
    cout << "Nilai indeks: " << indeks << endl;

    return 0;
}
