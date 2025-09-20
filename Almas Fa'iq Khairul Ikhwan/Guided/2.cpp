#include <iostream>
#include <conio.h>
#define MAX 5 // Ukuran array ditetapkan sebagai 5

using namespace std;

int main()
{
    int i, j;
    float nilai[MAX];   // Array 1 dimensi
    static int nilai_tahun[MAX][MAX] = {    // Array 2 dimensi (5x5)
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}};

    // Input data array 1 dimensi
    for (i = 0; i < MAX; i++)
    {
        cout << "Masukkan nilai ke-" << i + 1 << " ";
        cin >> nilai[i];
    }

    // Menampilkan isi array 1 dimensi
    cout << "\nData nilai siswa:\n";
    for (i = 0; i < MAX; i++)
    {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }

    // Menampilkan isi array 2 dimensi
    cout << "\nNilai tahunan:\n";
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl; // Tambahkan baris baru setelah menampilkan array 2D
    }
    getch(); // fungsi untuk menahan layar
    return 0;
}