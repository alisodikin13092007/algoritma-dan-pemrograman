#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double meter ,hasil;
    int pilihan;

    cout << "Program Koverensi Satuan Panjang" << endl;

    cout << "Masukan nilai dalam satuan meter (1-10) : ";
    cin >> meter;

    cout << endl;
    cout <<" Masukan Jenis Koverensi" << endl;
    cout <<"1. Meter Ke Centimeter" << endl;
    cout <<"2. Meter Ke Milimeter" << endl;
    cout <<"3. Meter Ke Kilometer" << endl;

    cout <<"Masukan Pilihan (1-3) : ";
    cin >> pilihan;

    cout <<  endl;
    if (pilihan == 1) {
        hasil = meter * 100;

        cout << meter << "Meter ="
            << hasil << "Centimeter" <<endl;
    }
    else if (pilihan == 2) {
        hasil = meter * 1000;

        cout << meter << "Meter ="
            << hasil << "Milimeter" <<endl;
    }
    else if (pilihan == 3) {
        hasil = meter / 1000;

        cout << meter << "Meter ="
            << hasil << "Kilometer" << endl;
    }
    else {
        cout << "Pilihan Tidak Tersedia !" << endl;
    }
    return 0;
}