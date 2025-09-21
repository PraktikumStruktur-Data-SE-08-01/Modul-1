#include <iostream>
#include <conio.h>

// NAMA : DAVIS ARVAPUTRA DWIANSYAH
// NIM : 103122400034
// KELAS : S1SE-08-01

#define MAX 5 // ukuran array 5

using namespace std;

int main() { // ← hanya nama fungsi diganti agar jadi entry point
    int i, j;
    float nilai[MAX]; // array 1 dimensi
    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3 ,3 ,0},
        {4 ,4 ,0, 0, 4},
        {5, 0, 0, 0, 5},
    };

    // input data array 1 dimensi
    for (i = 0; i < MAX; i++) {
        cout << "Masukkan Nilai Ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << "\nData Nilai Siswa:\n"; // menampilkan array 1 dimensi
    for (i = 0; i < MAX; i++) {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }

    cout << "\nNilai tahunan:\n ";
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl; // pindah baris setelah satu baris selesai ditampilkan
    }

    getch(); // menahan layar
    return 0;
}
