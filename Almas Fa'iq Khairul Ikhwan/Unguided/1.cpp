/********************************************************************
 * Nama         : Almas Fa’iq Khairul Ikhwan
 * NIM          : 21104029
 * Dosen        : Diah Septiani S.Kom M.Cs
 * Deskripsi    : Program ini menghitung nilai akhir dan indeks mahasiswa untuk mata kuliah Struktur Data berdasarkan 4 nilai CLO.
 ********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <conio.h>

// Soal 1: Deklarasi tipe bentukan 'nilaiSTD' menggunakan struct
struct nilaiSTD
{
    float CLO1, CLO2, CLO3, CLO4;
    float nilai_akhir;
    std::string indeks;
};

// Soal 6: Function untuk menghitung nilai akhir
float hitungNilaiAkhir(float c1, float c2, float c3, float c4)
{
    // Rumus: 30% CLO1 + 30% CLO2 + 20% CLO3 + 20% CLO4
    return (0.30f * c1) + (0.30f * c2) + (0.20f * c3) + (0.20f * c4);
}

// Soal 7: Function untuk menentukan indeks nilai
std::string tentukanIndeks(float nilai)
{
    if (nilai > 80)
    {
        return "A";
    }
    else if (nilai > 70)
    { // nilai <= 80
        return "AB";
    }
    else if (nilai > 65)
    { // nilai <= 70
        return "B";
    }
    else if (nilai > 60)
    { // nilai <= 65
        return "BC";
    }
    else if (nilai > 50)
    { // nilai <= 60
        return "C";
    }
    else if (nilai > 40)
    { // nilai <= 50
        return "D";
    }
    else
    { // nilai <= 40
        return "E";
    }
}

// Soal 4 & 5: Function untuk membuat dan mengisi struct nilaiSTD
int main()
{
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Nama    : Almas Fa’iq Khairul Ikhwan" << std::endl;
    std::cout << "NIM     : 21104029" << std::endl;
    std::cout << "Tugas   : Laporan Praktikum Modul 1" << std::endl;
    std::cout << "------------------------------------------\n"
              << std::endl;

    // Soal 2: Deklarasi variabel
    nilaiSTD data_mhs1;
    float in_clo1, in_clo2, in_clo3, in_clo4;

    // Soal 3: Meminta input dari user
    std::cout << "Masukkan nilai CLO-1: ";
    std::cin >> in_clo1;
    std::cout << "Masukkan nilai CLO-2: ";
    std::cin >> in_clo2;
    std::cout << "Masukkan nilai CLO-3: ";
    std::cin >> in_clo3;
    std::cout << "Masukkan nilai CLO-4: ";
    std::cin >> in_clo4;

    data_mhs1.CLO1 = in_clo1;
    data_mhs1.CLO2 = in_clo2;
    data_mhs1.CLO3 = in_clo3;
    data_mhs1.CLO4 = in_clo4;

    data_mhs1.nilai_akhir = hitungNilaiAkhir(data_mhs1.CLO1, data_mhs1.CLO2, data_mhs1.CLO3, data_mhs1.CLO4);
    data_mhs1.indeks = tentukanIndeks(data_mhs1.nilai_akhir);

    std::cout << "\n--- HASIL PERHITUNGAN ---" << std::endl;
    std::cout << "Nilai Akhir   : " << data_mhs1.nilai_akhir << std::endl;
    std::cout << "Indeks Nilai  : " << data_mhs1.indeks << std::endl;

    getch();
    return 0;
}