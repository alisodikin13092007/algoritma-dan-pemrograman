#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Header tabel
    cout << left
         << setw(10) << "Meter"
         << setw(15) << "Sentimeter"
         << setw(15) << "Milimeter"
         << setw(15) << "Kilometer" << endl;

    cout << "--------------------------------------------------------" << endl;

    // Perulangan dari 1 sampai 10 meter
    for (int meter = 1; meter <= 10; meter++) {
        int sentimeter = meter * 100;
        int milimeter = meter * 1000;
        double kilometer = meter / 1000.0;

        cout << left
             << setw(10) << meter
             << setw(15) << sentimeter
             << setw(15) << milimeter
             << setw(15) << fixed << setprecision(3) << kilometer
             << endl;
    }

    return 0;
}