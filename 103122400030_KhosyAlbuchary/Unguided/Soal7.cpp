#include <iostream>
#include <string>

using namespace std;

string tentukanIndeks(float skorAkhir) {
    if (skorAkhir > 80) return "A";
    else if (skorAkhir > 70) return "AB";
    else if (skorAkhir > 65) return "B";
    else if (skorAkhir > 60) return "BC";
    else if (skorAkhir > 50) return "C";
    else if (skorAkhir > 40) return "D";
    else return "E";
}

int main() {
    float skor_input;

    cout << "Masukkan nilai akhir : ";
    cin >> skor_input;
    
    
    string indeks_hasil = tentukanIndeks(skor_input);

    cout << "Untuk nilai " << skor_input << ", indeksnya adalah: " << indeks_hasil << endl;

    return 0;
}