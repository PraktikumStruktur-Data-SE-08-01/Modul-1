#include <iostream>
#include <conio.h>
#define MAX 5

using namespace std;

int main(){
    int i, j;
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX] = {
        {0,2,2,0,0},
        {0,2,2,0,0},
        {0,2,2,0,0},
        {0,2,2,0,0},
        {0,2,2,0,0}
    };

    for (i = 0; i < MAX; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << "\nData nilai siswa:\n";
    for (i = 0; i < MAX; i++) {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }

    cout << "\nNilai tahunan:\n";
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}