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

NilaiSTD gabungNilaiStd(float c1, float c2, float c3, float c4) {
    NilaiSTD temp;
    temp.clo1 = c1;
    temp.clo2 = c2;
    temp.clo3 = c3;
    temp.clo4 = c4;
    temp.nilaiAkhir = 0.0f;
    temp.indeks = "N/A";
    return temp;
}

int main() {
    float c1, c2, c3, c4;
    
    cout << "--- Input 4 Nilai CLO ---" << endl;
    cout << "CLO 1: "; cin >> c1;
    cout << "CLO 2: "; cin >> c2;
    cout << "CLO 3: "; cin >> c3;
    cout << "CLO 4: "; cin >> c4;
    
    // Panggil fungsi dengan data dari input user
    NilaiSTD mahasiswa = gabungNilaiStd(c1, c2, c3, c4);

    cout << "\nNilai Berhasil Disimpan" << endl;
    cout << "Data CLO 1 yang tersimpan di dalam struct: " << mahasiswa.clo1 << endl;

    return 0;
}