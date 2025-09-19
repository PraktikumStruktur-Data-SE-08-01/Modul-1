#include <iostream> // Library standar untuk input/output (cout, cin, dll)
#include <conio.h> // Library lama, dipakai untuk fungsi getch()
#define MAX 5 // constanta yg biasanya untuk array

using namespace std; // Supaya kita bisa pakai cout tanpa harus nulis std::cout

int main() // Nadia Tambunan 103122400005
{
    // ini bahasan variable
    int x,y; // Deklarasi variabel biasa, tipe integer
    int *px; // Deklarasi pointer ke integer (px bisa menyimpan alamat variabel int)
    x = 87; // Isi variabel x dengan nilai 87
    px = &x; // Isi pointer px dengan alamat dari x (px menunjuk ke x)
    y = *px; // Ambil nilai dari alamat yang ditunjuk px (y = isi dari x = 87)
    
    cout<<"Alamat x = "<< &x << endl;
    cout<<"Isi px = "<< px << endl;
    cout<<"Isi x = "<< x << endl;
    cout<<"Nilai *px = "<< *px << endl;
    cout<<"Nilai y = "<< y << endl;

    // INI BAHASAN ARRAY
    int i,j;
    float nilai[MAX]; // Array 1 dimensi, ukurannya MAX
    static int nilai_tahun[MAX][MAX] = { // Array 2 Dimensi (5x5)
        {0, 2, 2, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 3, 3, 3, 0},
        {4, 4, 0, 0, 4},
        {5, 2, 2, 0, 5}
    };

    // Input data Array 1 dimensi
    for (i = 0; i < MAX; i++) {
        cout << "\nMasukkan nilai ke-" << i + 1 << " : ";
        cin >> nilai[i]; // cin buat input 
    };
    
    // Menampilkan isi array 1 dimensi
    cout << "\nData nilai siswa:\n";
    for (i = 0; i <MAX; i++) {
        cout << "Nilai ke-" << i + 1 << " = " << nilai[i] << endl;
    } // Nadia Tambunan 103122400005

    // Menampilkan isi array 2 dimensi
    cout << "\nNilai Tahunan : \n";
    for(i = 0; i < MAX; i++) {
        for(j = 0; j < MAX; j++) {
            cout << nilai_tahun[i][j] << " ";
        }
        cout << endl; // Pindah baris setelah 1 baris selesai ditampilkan
    }

    getch(); // Tunggu user menekan tombol apa saja sebelum program berhenti
    return 0; // Program selesai dengan status "berhasil"
}
