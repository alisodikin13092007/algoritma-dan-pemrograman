#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double angka[5];
    double jumlah = 0;
    double rata_rata, standar_deviasi;
    double jumlah_kuadrat = 0;

    // Input 5 angka
    for (int i = 0; i < 5; i++) {
        cout << "Angka " << i + 1 << ": ";
        cin >> angka[i];

        jumlah += angka[i];
    }

    // Menghitung rata-rata
    rata_rata = jumlah / 5;

    // Menghitung jumlah kuadrat selisih dari rata-rata
    for (int i = 0; i < 5; i++) {
        jumlah_kuadrat += pow(angka[i] - rata_rata, 2);
    }

    // Menghitung standar deviasi
    standar_deviasi = sqrt(jumlah_kuadrat / 5);

    // Menampilkan hasil dengan 2 angka desimal
    cout << fixed << setprecision(2);
    cout << "\nRata-rata: " << rata_rata << endl;
    cout << "Standar Deviasi: " << standar_deviasi << endl;

    return 0;
}