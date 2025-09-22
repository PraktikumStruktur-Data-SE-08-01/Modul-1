#include <iostream>
#include <string>

using namespace std;

struct nilaiSTD {
    double CLO1;
    double CLO2;
    double CLO3;
    double CLO4;
    double finalScore;
    string indexScore;
};

nilaiSTD editDataCLO(double clo1, double clo2, double clo3, double clo4) {
    nilaiSTD data;
    data.CLO1 = clo1;
    data.CLO2 = clo2;
    data.CLO3 = clo3;
    data.CLO4 = clo4;
    return data;
}

double countFinalScore(double clo1, double clo2, double clo3, double clo4) {
    double finalScore = (0.3 * clo1) + (0.3 * clo2) + (0.2 * clo3) + (0.2 * clo4);
    return finalScore;
}

string idxScore(double finalScore) {
     if (finalScore > 80) {
        return "A";
    } else if (finalScore > 70 && finalScore <= 80) {
        return "AB";
    } else if (finalScore > 65 && finalScore <= 70) {
        return "B";
    } else if (finalScore > 60 && finalScore <= 65) {
        return "BC";
    } else if (finalScore > 50 && finalScore <= 60) {
        return "C";
    } else if (finalScore > 40 && finalScore <= 50) {
        return "D";
    } else {
        return "E";
    }
}

int main() {

    nilaiSTD data1;

    double clo1, clo2, clo3, clo4;

    cout << "Input Score CLO 1: ";
    cin >> clo1;
    cout << "Input Score CLO 2: ";
    cin >> clo2;
    cout << "Input Score CLO 3: ";
    cin >> clo3;
    cout << "Input Score CLO 4: ";
    cin >> clo4;

    data1 = editDataCLO(clo1, clo2, clo3, clo4);

    data1.finalScore = countFinalScore(clo1, clo2, clo3, clo4);

    data1.indexScore = idxScore(data1.finalScore);

    cout << "\n-----Hasil Perhitungan-----" << endl;
    cout << "Score CLO 1: " << data1.CLO1 << endl;
    cout << "Score CLO 2: " << data1.CLO2 << endl;
    cout << "Score CLO 3: " << data1.CLO3 << endl;
    cout << "Score CLO 4: " << data1.CLO4 << endl;

    cout << "\nScore Akhir: " << data1.finalScore << endl;
    cout << "Index Score: " << data1.indexScore << endl;

    cout << "103122400018 - Muhammad Rasyid Ridho";

    return 0;
}