#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float suhu, total = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Suhu Hari " << i << ": ";
        cin >> suhu;
        total += suhu;
    }

    float rataRata = total / 5;

    cout << fixed << setprecision(1);
    cout << "Rata-rata Suhu: " << rataRata << endl;

    return 0;
}