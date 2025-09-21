//Putra Anugrah Pamungkas
//103122400007
#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 5
int main(){
    int i, j;
    float nilai[MAX]; //arrray 1 dimensi
    static int nilai_tahun[MAX][MAX] = {  //array 2 dimensi
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };
    //input data array 1 dimensi
    for ( i = 0; i < MAX; i++){
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }
    //menampilkan isi array 1 dimensi
    cout << "\nData nilai siswa:\n";
    for ( i = 0; i < MAX; i++){
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    }
    //menampilkan isi array 2 dimensi
    cout << "\nNilai tahunan\n";
    for ( i = 0; i < MAX; i++)
    {
        for ( j = 0; j < MAX; j++)
        {
            cout << nilai_tahun[i][j] << " ";
        }

        cout << endl;
        
    }
    getch();
    return 0;
}