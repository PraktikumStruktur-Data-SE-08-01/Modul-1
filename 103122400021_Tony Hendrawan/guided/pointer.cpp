#include <conio.h>
#include <iostream>

using namespace std;

int main(){
    int x,y;
    int *px;
    x = 87;
    px = &x;
    y = *px;

    cout <<"Alamat x = "<< &x << endl;
    cout <<"isi px x = "<< px << endl;
    cout <<"isi x = "<< x << endl;
    cout <<"nilai *px = "<< *px << endl;
    cout <<"nilai y = "<< y << endl;

   getch();
   return 0;

}
