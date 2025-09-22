#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Deklarasi fungsi untuk mencari nilai maksimum dari 3 bilangan
int maks3(int a, int b, int c);

int main() {
    system("cls");  // Membersihkan layar (khusus Windows)
    int x, y, z;

    // Input nilai untuk x, y, dan z
    cout << "Masukkan nilai bilangan ke-1: ";
    cin >> x;
    cout << "Masukkan nilai bilangan ke-2: ";
    cin >> y;
    cout << "Masukkan nilai bilangan ke-3: ";
    cin >> z;

    // Menampilkan hasil maksimum
    cout << "Nilai maksimumnya adalah = " << maks3(x, y, z) << endl;

    getche();  // Agar layar tidak langsung tertutup
    return 0;
}

// Definisi fungsi maks3
int maks3(int a, int b, int c) {
    int temp_max = a;     // Asumsikan nilai maksimum adalah a
    if (b > temp_max)     // Bandingkan dengan b
        temp_max = b;
    if (c > temp_max)     // Bandingkan dengan c
        temp_max = c;
    return temp_max;      // Kembalikan nilai terbesar
}