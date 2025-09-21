#include <iostream>
#include <conio.h> // untuk getch()
#define MAX 5
using namespace std;

// Daffa Aufany Febrianto_103122400029
int main() {

    // Ini Pointer 
    int x,y; 
    int *px; 
    x = 87; 
    px = &x; 
    y = *px; 
    
    cout<<"Alamat x = "<< &x << endl;
    cout<<"Isi px = "<< px << endl;
    cout<<"Isi x = "<< x << endl;
    cout<<"Nilai *px = "<< *px << endl;
    cout<<"Nilai y = "<< y << endl;

    // Ini Array
    
    int i, j;
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    };
    for (i = 0; i<MAX; i++){
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }
    // Menampilkan isi array satu dimensi
    cout << "\nData nilai siswa:\n";
    for (i = 0; i<MAX; i++){
        cout << "Nilai ke-" << i + 1 << ": " << nilai[i] << endl;
    }

    // Menampilkan isi array dua dimensi
    cout << "\nNilai tahun:\n";
    for (i = 0; i<MAX; i++){
        for (j = 0; j<MAX; j++){
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl;
    }

    getch();
    return 0;
}