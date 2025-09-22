#include<iostream>
#include<conio.h> //Untuk getch()

using namespace std;

int main(){
    int x,y; //Variabel x dan y bertipe integer
    int *px; //Pointer px menunjuk ke variabel integer
    x = 87; //Nilai x = 87
    px = &x; //Pointer px menyimpan alamat dari x
    y = *px; // y menyimpan nilai yang ditunjuk oleh pointer px

    cout<<"Alamat x = "<<&x<<endl; //Menampilkan alamat memori
    cout<<"Isi px = "<<px<<endl; //isi pointer px = alamat x
    cout<<"Isi x = "<<x<<endl; //Nilai variabel x
    cout<<"Isi *px = "<<*px<<endl; //Nilai yang ditunjuk pointer
    cout<<"Isi Y = "<<y<<endl; //Nilai y hasil copy dari *px

    getch(); //Agar program tidak langsung tertutup
    return 0;
}
//Rafael Putra Septava //103122400015


