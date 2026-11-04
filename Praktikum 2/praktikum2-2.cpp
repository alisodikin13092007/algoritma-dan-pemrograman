#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main () {

    system("chcp 65001 > nul"); // untuk mengubah encoding ke UTF-8 agar karakter dapat ditampilkan dengan benar
string namabarang;
    int harga;
    double diskon;
   
//untuk memasukkan input data
    cout << "namabarang :";
    getline (cin, namabarang);

    cout << "harga :";
    cin >> harga;

    cout << "diskon (%) :";
    cin >> diskon;

    int totalharga = harga - (harga * diskon / 100.0);
    cout << endl; 
//menampilkan_fariable_input_data
cout << left << setw (23) << "namabarang" << setw (23) << "harga" << setw (23) << "diskon" << setw (23) << "totalharga" << endl;
cout << "------------------------------------------------------------------------------------------" << endl;
cout << left << setw (23) << namabarang << setw (23) << harga << setw (23) << diskon << setw (23) << fixed << setprecision(5) << (double) totalharga << endl;
return 0;


}