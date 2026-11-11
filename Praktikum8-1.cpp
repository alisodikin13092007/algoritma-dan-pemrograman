#include <iostream>
using namespace std;

double hitungTotal(double nilai[], int n) {
    if (n == 0) {
        return 0;
    }

    return nilai[n - 1] + hitungTotal(nilai, n - 1);
}

int main() {
    int jumlah;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah mahasiswa tidak boleh 0 atau kurang." << endl;
        return 0;
    }

    double *nilai = new double[jumlah];

    cout << "Masukkan nilai mahasiswa:" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        cin >> nilai[i];
    }

    double terbesar = nilai[0];
    double terkecil = nilai[0];

    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] > terbesar) {
            terbesar = nilai[i];
        }

        if (nilai[i] < terkecil) {
            terkecil = nilai[i];
        }
    }

    double total = hitungTotal(nilai, jumlah);
    double rataRata = total / jumlah;

    cout << "\n=== HASIL NILAI MAHASISWA ===" << endl;
    cout << "Nilai terbesar : " << terbesar << endl;
    cout << "Nilai terkecil : " << terkecil << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;

    delete[] nilai;

    return 0;
}
