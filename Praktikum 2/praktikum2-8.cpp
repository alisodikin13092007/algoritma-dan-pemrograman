#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double panjang, lebar, tinggi, hargaCat;
    double luasDinding;
    double jumlahCat;
    double totalBiaya;

    cout << "=== MENGHITUNG BIAYA CAT DINDING ===" << endl;

    cout << "Panjang ruangan (meter): ";
    cin >> panjang;

    cout << "Lebar ruangan (meter): ";
    cin >> lebar;

    cout << "Tinggi ruangan (meter): ";
    cin >> tinggi;

    cout << "Harga cat per liter (Rp): ";
    cin >> hargaCat;

    // Menghitung luas seluruh dinding
    luasDinding = 2 * (panjang + lebar) * tinggi;

    // 1 liter cat dapat mengecat 10 m^2
    jumlahCat = luasDinding / 10;

    // Menghitung total biaya cat
    totalBiaya = jumlahCat * hargaCat;

    cout << fixed << setprecision(2);

    cout << "\nLuas dinding: " << luasDinding << " m^2" << endl;
    cout << "Jumlah liter cat yang dibutuhkan: " << jumlahCat << " liter" << endl;
    cout << "Total biaya cat: Rp " << totalBiaya << endl;

    return 0;
}