#include <iostream>

using namespace std;

int main() {
    int pilihan;

    do {
        int totalHadir = 0;
        int inputHadir;

        for (int i = 1; i <= 5; i++) {
            cout << "Apakah mahasiswa hadir di hari ke-" << i << "? (1 untuk hadir, 0 untuk tidak hadir): ";
            cin >> inputHadir;
            
            if (inputHadir == 1) {
                totalHadir++;
            }
        }

        double persentase = (double)totalHadir / 5 * 100;
        cout << "Persentase Kehadiran: " << persentase << "%" << endl;

        cout << "Status Kehadiran: ";
        if (persentase > 75) {
            cout << "Baik" << endl;
        } else if (persentase >= 50 && persentase <= 75) {
            cout << "Cukup" << endl;
        } else {
            cout << "Kurang" << endl;
        }

        cout << "Ingin mengecek kehadiran untuk mahasiswa lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> pilihan;
        cout << endl;

    } while (pilihan == 1);

    return 0;
}