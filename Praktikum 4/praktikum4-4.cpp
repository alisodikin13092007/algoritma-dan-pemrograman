#include <iostream>
using namespace std;

int main() {
    int jumlah;
    char lagi;

    do {
        cout << "Masukkan jumlah mata pelajaran: ";
        cin >> jumlah;

        double nilai, total = 0, rataRata;

      
        for (int i = 1; i <= jumlah; i++) {
            cout << "Masukkan nilai mata pelajaran ke-" << i << ": ";
            cin >> nilai;
            total += nilai;
        }

        rataRata = total / jumlah;

        cout << "Rata-rata Nilai: " << rataRata << endl;

        if (rataRata > 85) {
            cout << "Prestasi: Sangat Baik" << endl;
        }
        else if (rataRata >= 70) {
            cout << "Prestasi: Baik" << endl;
        }
        else if (rataRata >= 50) {
            cout << "Prestasi: Cukup" << endl;
        }
        else {
            cout << "Prestasi: Perlu Peningkatan" << endl;
        }

        cout << "Ingin menghitung nilai untuk siswa lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> lagi;

    } while (lagi == '1');

    return 0;
}