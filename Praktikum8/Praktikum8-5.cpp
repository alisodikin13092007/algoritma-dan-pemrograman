#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;

struct Produk {
    string nama;
    long long harga;
    int terjual;
    long long pendapatan;
};

int main() {
    int n;

    cout << "Masukkan jumlah produk: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah produk harus lebih dari 0!";
        return 0;
    }

    Produk *produk = new Produk[n];

    long long total = 0;
    long long tertinggi = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nProduk ke-" << i + 1 << endl;

        cout << "Nama produk: ";
        cin >> produk[i].nama;

        cout << "Harga satuan: ";
        cin >> produk[i].harga;

        cout << "Jumlah terjual: ";
        cin >> produk[i].terjual;

        produk[i].pendapatan = produk[i].harga * produk[i].terjual;

        total += produk[i].pendapatan;

        if (produk[i].pendapatan > tertinggi) {
            tertinggi = produk[i].pendapatan;
        }
    }

    double rata = (double)total / n;

    cout << "\n===== HASIL ANALISIS PENJUALAN =====" << endl;
    cout << "Total pendapatan: Rp " << total << endl;
    cout << "Rata-rata pendapatan per produk: Rp "
         << fixed << setprecision(0) << rata << endl;

    cout << "\nProduk dengan pendapatan tertinggi:" << endl;

    for (int i = 0; i < n; i++) {
        if (produk[i].pendapatan == tertinggi) {
            cout << produk[i].nama << " (Rp "
                 << produk[i].pendapatan << ")" << endl;
        }
    }

    delete[] produk;

    return 0;
}
