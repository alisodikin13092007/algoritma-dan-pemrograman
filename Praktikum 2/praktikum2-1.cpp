#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama;
    int jamKerja;
    long long tarifPerJam;
    long long gajiTotal;

    // Input
    cout << "Nama Karyawan: ";
    getline(cin, nama);

    cout << "Jam Kerja: ";
    cin >> jamKerja;

    cout << "Tarif Per Jam: ";
    cin >> tarifPerJam;

    // Menghitung gaji total
    gajiTotal = jamKerja * tarifPerJam;

    // Output tabel
    cout << "\n";
    cout << left
         << setw(20) << "Nama"
         << setw(15) << "Jam Kerja"
         << setw(20) << "Tarif Per Jam"
         << setw(15) << "Gaji Total" << endl;

    cout << string(70, '-') << endl;

    cout << left
         << setw(20) << nama
         << setw(15) << jamKerja
         << setw(20) << tarifPerJam
         << setw(15) << gajiTotal << endl;

    return 0;
}