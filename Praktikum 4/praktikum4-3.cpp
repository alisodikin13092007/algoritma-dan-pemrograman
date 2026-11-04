#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double kwh, tarif, totaltagihan, diskon, totalsetelahdiskon;
    int pilihan;

    do{
        cout << "masukkan penggunaan listrik (kwh): ";
        cin >> kwh;


    if (kwh <= 100) {
        tarif = 1500;

    }
    else if (kwh >= 101 && kwh <= 300) {
        tarif = 2000;

    }
    else if (kwh > 300) {
        tarif = 3000;

    }

    totaltagihan = kwh * tarif;

    if (totaltagihan > 1000000) {
        diskon = totaltagihan * 0.10;

    }
    else {
        diskon = 0;

    }

    totalsetelahdiskon = totaltagihan - diskon;

    cout << fixed << setprecision(2);
    cout << "total penggunaan  listrik: " << kwh << " kwh" << endl;
    cout << "total tagihan sebelum diskon: Rp " << totaltagihan << endl;
    cout << "diskon: Rp " << diskon << endl;
    cout << "total tagihan setelah diskon: Rp " << totalsetelahdiskon << endl;

    cout << "ingin menghitung tagihan untuk penggunaan lain? ";
    cout << "(1 untuk ya, selain itu tidak): ";
    cin >> pilihan;

    cout << endl;

    } while (pilihan == 1);

    return 0;


}