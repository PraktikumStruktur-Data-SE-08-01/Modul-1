#include <iostream> // 103122400004 Abidah 
#include <conio.h> //biar bisa getch
using namespace std; //ini sbnrnya bisa ditulis manual ke tiap pas mau kita printout, cuma biar all in one
#define MAX 5 //ini constant, jd MAX itu 5

int main()
{
    cout << "Hello, World!" << endl; //endl tuh biar ke enter text selanjutnya
    cout << "This is a simple C++ program. "; //ini kan gaada endl nya jd nyatu sm yg bawah textnya
    cout << "It demonstrates basic input and output operations." << endl;


    int x,y; //variabel
    int *px; //pointer
    x = 87;
    px = &x; //pointer px nyimpen alamat si x
    y = *px; //nilai y diisi nilai yg ditunjuk px, yaitu x

    cout << "alamat x: " << &x << endl;
    cout << "isi px: " << px << endl;
    cout << "isi x: " << x << endl;
    cout << "nilai *px: " << *px << endl;
    cout << "nilai y: " << y << endl;


    int i,j;
    float nilai[MAX]; //array 1 dimensi
    static int nilai_tahun [MAX][MAX] = { //array 2 dimensi
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}
    }; 

    for (i=0; i<MAX; i++) {
        cout << "Masukkan nilai ke-" << (i+1) << ": ";
        cin >> nilai[i]; //input array 1 dimensi
    }

    cout << "\nData nilai siswa:\n";
    for (i=0; i<MAX; i++) {
        cout << "Nilai ke-" << (i+1) << ": " << nilai[i] << endl; //output array 1 dimensi
    }

    cout << "\nData nilai tahun:\n";
    for (i=0; i<MAX; i++) {
        for (j=0; j<MAX; j++) {
            cout << nilai_tahun[i][j] << " "; //output array 2 dimensi
        }
        cout << endl;
    }

    getch(); //biar ga langsung close
    return 0;
}
