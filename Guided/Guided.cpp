#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int x,y; //variabel
int *px; //pointer
y = *px;
x = 87;
px = &x; //pointer 
y = *px;

cout << "Alamat x =" << &x << endl;
cout << "Isi px =" << px << endl;
cout << "Isi x =" << x << endl;
cout << "Nilai *px =" << *px << endl;
cout << "Nilai y =" << y << endl;

getch();
return 0;
}
