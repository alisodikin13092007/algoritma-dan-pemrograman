#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int totalBarang, diskon, again;
    double hargaTotal, hargaDiskon;
    do
    {
        again = 0;
        diskon = 0;
        hargaDiskon = 0;
        hargaTotal = 0;
        cout << "Masukkan jumlah barang: ";
        cin >> totalBarang;

        for (int i = 1; i <= totalBarang; i++)
        {
            double hargaBarang;
            cout << "Masukkan harga barang ke-" << i << ": ";
            cin >> hargaBarang;
            hargaTotal += hargaBarang;
        }

        if (hargaTotal > 500000)
        {
            diskon = 10;
            hargaDiskon = hargaTotal - (hargaTotal * diskon / 100);
        }
        else if (hargaTotal <= 500000 && hargaTotal >= 250000)
        {
            diskon = 5;
            hargaDiskon = hargaTotal - (hargaTotal * diskon / 100);
        }
        else
        {
            hargaDiskon = hargaTotal;
        }

        cout << "======================= Tabel Pembelian =======================" << endl;
        cout << setw(15) << left << "Total Harga" << ": Rp." << hargaTotal << endl;
        cout << setw(15) << left << "Diskon" << ": " << diskon << "%" << endl;
        cout << setw(15) << left << "Total Diskon" << ": Rp." << hargaDiskon << endl;

        cout << "ingin menambahkan belanjaan lagi? (1 untuk ya, selain itu tidak): ";
        cin >> again;
    } while (again == 1);
    cout << "======================= Pembelian Berakhir =======================" << endl;

    return 0;
}