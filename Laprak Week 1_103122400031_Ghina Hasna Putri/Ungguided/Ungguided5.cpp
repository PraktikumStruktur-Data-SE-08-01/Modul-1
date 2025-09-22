#include <iostream>
using namespace std;

double hitungNilaiSTD(double CLO1, double CLO2, double CLO3, double CLO4) {
    double nilaiSTD = (CLO1 + CLO2 + CLO3 + CLO4) / 4.0;
    return nilaiSTD;
}

int main() {
    double CLO1, CLO2, CLO3, CLO4;

    cout << "Masukkan nilai CLO-1 : ";
    cin >> CLO1;
    cout << "Masukkan nilai CLO-2 : ";
    cin >> CLO2;
    cout << "Masukkan nilai CLO-3 : ";
    cin >> CLO3;
    cout << "Masukkan nilai CLO-4 : ";
    cin >> CLO4;

    double hasil = hitungNilaiSTD(CLO1, CLO2, CLO3, CLO4);

    cout << "Nilai STD = " << hasil << endl;

    return 0;
}