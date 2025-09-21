#include <iostream>
#include <conio.h>

// NAMA : DAVIS ARVAPUTRA DWIANSYAH
// NIM : 13122400034
// KELAS : S1SE-08-01

using namespace std;
int main(){
    int x,y;
    int *px;
    x = 87;
    px = &x;
    y = *px;

    cout<< "Alamat x  = "<< &x <<endl;
    cout<< "Isi px    = "<< px <<endl;
    cout<< "Isi X     = "<< x <<endl;
    cout<< "Nilai *px = "<< *px <<endl;
    cout<< "Nilai y   = "<< y <<endl;

    getch();
    return 0;
}