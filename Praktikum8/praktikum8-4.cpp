#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung diskon
int hitungDiskon(int harga[], int jumlah, int i = 0) {
    if (i == jumlah) return 0;

    int total = harga[i];

    if (harga[i] > 500000) {
        total = harga[i] - (harga[i] * 10 / 100);
        cout << "Diskon untuk barang " << i + 1 << ": 10%" << endl;
    }
    else if (harga[i] >= 250000) {
        total = harga[i] - (harga[i] * 5 / 100);
        cout << "Diskon untuk barang " << i + 1 << ": 5%" << endl;
    }
    else {
        cout << "Diskon untuk barang " << i + 1 << ": Tidak ada diskon" << endl;
    }

    return total + hitungDiskon(harga, jumlah, i + 1);
}

int main() {
    int jumlah;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    if (jumlah <= 0) {
        cout << "Jumlah barang harus lebih dari 0!";
        return 0;
    }

    int* harga = new int[jumlah];

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan harga barang " << i + 1 << ": ";
        cin >> harga[i];
    }

    cout << "\nHasil diskon:\n";

    int total = hitungDiskon(harga, jumlah);

    cout << "\nTotal harga setelah diskon: " << total << endl;

    delete[] harga;

    return 0;
}