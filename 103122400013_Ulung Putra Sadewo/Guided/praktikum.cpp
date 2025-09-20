/* #include <iostream>

using namespace std;

int main() {
    cout<<"HELLO WORLD!"<<endl;
    return 0;
} */









/* #include <iostream>
#include <conio.h>

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
}*/

#include <iostream>
#include <conio.h>
#define MAX 5

using namespace std;

int main(){
    int i, j;
    float nilai[MAX];
    static int nilai_tahun[MAX][MAX] = {
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 0, 0, 0, 5}                                                    //Ulung Putra Sadewo
                                                                          //103122400013          
    };
    //input data aray 1 dimensi
for (i = 0; i < MAX; i++) {
    cout << "Masukan nilai ke-" << i + 1 << ": ";
    cin >> nilai[i];
}

// menampilkan array 1 dimensi
cout << "\nData nilai siswa:\n";
for (i = 0; i < MAX; i++){
    cout << "Nilai ke-" << i + 1 << " = " << nilai [i] << endl;
}

//Menampilkan isi array 2 dimensi 
cout << "\nNilai Tahunan:\n";
for (i = 0; i < MAX; i++){
    for (j = 0; j < MAX; j++){
        cout << nilai_tahun[i][i] << " ";
    }
    cout << endl;
}

getch();
return 0;

}1