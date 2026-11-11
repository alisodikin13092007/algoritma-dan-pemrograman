#include <iostream>
using namespace std;

// Fungsi rekursif
void tampil(int** m, int baris, int kolom, int i = 0) {
    if (i == baris) return;

    for (int j = 0; j < kolom; j++) {
        cout << m[i][j] << " ";
    }

    cout << endl;
    tampil(m, baris, kolom, i + 1);
}

int main() {
    int baris, kolom;

    cout << "Masukkan baris: ";
    cin >> baris;
    cout << "Masukkan kolom: ";
    cin >> kolom;

    int** a = new int*[baris];
    int** t = new int*[kolom];

    for (int i = 0; i < baris; i++)
        a[i] = new int[kolom];

    for (int i = 0; i < kolom; i++)
        t[i] = new int[baris];

    cout << "Masukkan elemen matriks:\n";

    for (int i = 0; i < baris; i++)
        for (int j = 0; j < kolom; j++) {
            cin >> a[i][j];
            t[j][i] = a[i][j];
        }

    cout << "\nMatriks asli:\n";
    tampil(a, baris, kolom);

    cout << "\nMatriks transpose:\n";
    tampil(t, kolom, baris);

    for (int i = 0; i < baris; i++)
        delete[] a[i];

    for (int i = 0; i < kolom; i++)
        delete[] t[i];

    delete[] a;
    delete[] t;

    return 0;
}