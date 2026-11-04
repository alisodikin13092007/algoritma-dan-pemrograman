#include <iostream>
#include <iomanip>
using namespace std;

    int main(){
    string nama;
    int jamKerja;
    double tarifPerjam, gajiTotal;

    // input 
    cout << "Nama Karyawan : ";
    getline(cin, nama);

    cout << "Jam Kerja     : ";
    cin >> jamKerja;
    
    cout << "tarif Per Jam : ";
    cin >> tarifPerjam;

    // menghitung gaji total
    gajiTotal = jamKerja * tarifPerjam;

    /// Output
    cout << "\n============================================\n";

    cout << left << setw(15) << "Nama"

         << setw(12) << "Jam Kerja"

         << setw(18) << "Tarif Per Jam"

         << "Gaji Total" << endl;

    cout << "--------------------------------------------\n";

    cout << left << setw(15) << nama

         << setw(12) << jamKerja

         << setw(18) << tarifPerjam

         << gajiTotal << endl;

    cout << "============================================\n";

    return 0;

    }