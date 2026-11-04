#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double angka [5];
    double jumlah = 0;
    double rata_rata;
    double standar_deviasi;
    double jumlah_kuadrat = 0;

    cout << "Masukkan 5 angka:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i + 1 << ": ";
        cin >> angka[i];

        jumlah += angka[i];
    }

      rata_rata = jumlah / 5;

         for (int i = 0; i < 5; i++) {
        jumlah_kuadrat += pow(angka[i] - rata_rata, 2);
    }

    standar_deviasi = sqrt(jumlah_kuadrat / 5);

    cout << fixed << setprecision(2);

    cout << " HASIL PERHITUNGAN 6" << endl;
    cout << "Rata-rata       : " << rata_rata << endl;
    cout << "Standar deviasi : " << standar_deviasi << endl;

       if (standar_deviasi > 2) {
        cout << "Variasi         : Variasi Tinggi" << endl;
    } else {
        cout << "Variasi         : Variasi Rendah" << endl;
    }

    return 0;

}