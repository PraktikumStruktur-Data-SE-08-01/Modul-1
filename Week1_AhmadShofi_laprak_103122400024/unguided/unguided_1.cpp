// Dosen : Diah Septiani S.Kom M.Cs 
// Ahmad Shofi
// 103122400024

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct DataNilai {
    double clo1{}, clo2{}, clo3{}, clo4{};
    double akhir{};
    string grade{};
};

DataNilai simpanData(double C1, double C2, double C3, double C4);

double hitungNilaiAkhir(double C1, double C2, double C3, double C4) {
    return (0.3*C1) + (0.3*C2) + (0.2*C3) + (0.2*C4);
}

string tentukanIndeks(double nilaiAkhir) {
    if (nilaiAkhir >= 85) return "A";
    else if (nilaiAkhir >= 75) return "AB";
    else if (nilaiAkhir >= 70) return "B";
    else if (nilaiAkhir >= 65) return "BC";
    else if (nilaiAkhir >= 60) return "C";
    else if (nilaiAkhir >= 50) return "D";
    else return "E";
}

DataNilai simpanData(double C1, double C2, double C3, double C4) {
    DataNilai temp;
    temp.clo1 = C1;
    temp.clo2 = C2;
    temp.clo3 = C3;
    temp.clo4 = C4;
    return temp;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    DataNilai std1, std2;
    
    double C1, C2, C3, C4;
    cout << "=== Input Nilai CLO Mahasiswa ===\n";
    cout << "Masukkan nilai CLO1 : "; cin >> C1;
    cout << "Masukkan nilai CLO2 : "; cin >> C2;
    cout << "Masukkan nilai CLO3 : "; cin >> C3;
    cout << "Masukkan nilai CLO4 : "; cin >> C4;

    cout << "----------------------------------\n";
    cout << "Data yang Anda masukkan:\n";
    cout << "CLO1 = " << C1 << "\n";
    cout << "CLO2 = " << C2 << "\n";
    cout << "CLO3 = " << C3 << "\n";
    cout << "CLO4 = " << C4 << "\n";

    std1 = simpanData(C1, C2, C3, C4);
    std1.akhir = hitungNilaiAkhir(std1.clo1, std1.clo2, std1.clo3, std1.clo4);
    std1.grade = tentukanIndeks(std1.akhir);

    cout << fixed << setprecision(2);
    cout << "----------------------------------\n";
    cout << "Nilai Akhir : " << std1.akhir << "\n";
    cout << "Grade       : " << std1.grade << "\n";

    return 0;
}
