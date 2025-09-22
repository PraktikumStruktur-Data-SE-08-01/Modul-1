#include <iostream>


using namespace std;

int main()
{
    int x, y; // variabel
    int *px;  // pointer
    x = 87;   // x menampung nilai 87
    px = &x;  // pointer px menyimpan alamat dari x
    y = *px;  // y menampung nilai yang ditunjuk oleh px (nilai tidak terdefinisi karena px belum diinisialisasi)

    cout << "Alamat x = " << &x << endl;  // & adalah operator address of
    cout << "Isi px = " << px << endl;    // px menyimpan alamat dari x
    cout << "Isi x = " << x << endl;      // x menampilkan nilai 87
    cout << "Nilai px = " << *px << endl; // * adalah operator dereference
    cout << "Nilai y = " << y << endl;    // y menampilkan nilai 87

    getchar(); // fungsi untuk menahan layar
    return 0;
}