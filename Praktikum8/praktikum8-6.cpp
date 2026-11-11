#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
using namespace std;

// Struktur data proyek
struct Proyek {
    string nama;
    long long anggaran;
    int pekerja;
};

int main() {
    Proyek* proyek = nullptr;
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n=== MENU DATA PROYEK ===" << endl;
        cout << "1. Tambah proyek" << endl;
        cout << "2. Hapus proyek" << endl;
        cout << "3. Tampilkan data proyek" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            Proyek dataBaru;

            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Masukkan nama proyek: ";
            getline(cin, dataBaru.nama);

            do {
                cout << "Masukkan anggaran proyek: ";
                cin >> dataBaru.anggaran;

                if (dataBaru.anggaran < 0)
                    cout << "Anggaran tidak boleh negatif!\n";

            } while (dataBaru.anggaran < 0);

            do {
                cout << "Masukkan jumlah pekerja: ";
                cin >> dataBaru.pekerja;

                if (dataBaru.pekerja < 0)
                    cout << "Jumlah pekerja tidak boleh negatif!\n";

            } while (dataBaru.pekerja < 0);

            Proyek* baru = new Proyek[jumlah + 1];

            for (int i = 0; i < jumlah; i++)
                baru[i] = proyek[i];

            baru[jumlah] = dataBaru;

            delete[] proyek;
            proyek = baru;
            jumlah++;

            cout << "Proyek berhasil ditambahkan!\n";
        }

        else if (pilihan == 2) {
            if (jumlah == 0) {
                cout << "Belum ada data proyek!\n";
            }
            else {
                for (int i = 0; i < jumlah; i++)
                    cout << i + 1 << ". " << proyek[i].nama << endl;

                int indeks;
                cout << "Masukkan nomor proyek yang dihapus: ";
                cin >> indeks;

                if (indeks < 1 || indeks > jumlah) {
                    cout << "Nomor proyek tidak valid!\n";
                }
                else {
                    Proyek* baru = nullptr;

                    if (jumlah > 1) {
                        baru = new Proyek[jumlah - 1];

                        int j = 0;
                        for (int i = 0; i < jumlah; i++) {
                            if (i != indeks - 1) {
                                baru[j] = proyek[i];
                                j++;
                            }
                        }
                    }

                    delete[] proyek;
                    proyek = baru;
                    jumlah--;

                    cout << "Proyek berhasil dihapus!\n";
                }
            }
        }

        else if (pilihan == 3) {
            if (jumlah == 0) {
                cout << "Belum ada proyek yang dimasukkan!\n";
            }
            else {
                long long totalAnggaran = 0;
                long long totalPekerja = 0;
                int terbesar = 0;

                cout << "\n=== DATA PROYEK ===\n";

                for (int i = 0; i < jumlah; i++) {
                    cout << "Proyek: " << proyek[i].nama << endl;
                    cout << "Anggaran: Rp " << proyek[i].anggaran << endl;
                    cout << "Pekerja: " << proyek[i].pekerja << endl;

                    totalAnggaran += proyek[i].anggaran;
                    totalPekerja += proyek[i].pekerja;

                    if (proyek[i].anggaran > proyek[terbesar].anggaran)
                        terbesar = i;
                }

                double rataRata = static_cast<double>(totalPekerja) / jumlah;

                cout << "\nTotal anggaran: Rp " << totalAnggaran << endl;
                cout << "Rata-rata pekerja: " << fixed << setprecision(2) << rataRata << endl;

                cout << "Proyek dengan anggaran terbesar: "
                     << proyek[terbesar].nama << endl;
            }
        }

        else if (pilihan != 0) {
            cout << "Pilihan menu tidak valid!\n";
        }

    } while (pilihan != 0);

    delete[] proyek;

    return 0;
}