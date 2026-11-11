#include <iostream>

#include <iostream>
using namespace std;

int main() {
    int barisA, kolomA, barisB, kolomB;

    cout << "Masukkan baris Matriks A: ";
    cin >> barisA;
    cout << "Masukkan kolom Matriks A: ";
    cin >> kolomA;

    cout << "Masukkan baris Matriks B: ";
    cin >> barisB;
    cout << "Masukkan kolom Matriks B: ";
    cin >> kolomB;

    // Mengecek apakah matriks bisa dikalikan
    if (kolomA != barisB) {
        cout << "Matriks tidak dapat dikalikan!" << endl;
        return 0;
    }

    // Membuat array dinamis 2 dimensi
    int **A = new int*[barisA];
    int **B = new int*[barisB];
    int **C = new int*[barisA];

    for (int i = 0; i < barisA; i++)
        A[i] = new int[kolomA];

    for (int i = 0; i < barisB; i++)
        B[i] = new int[kolomB];

    for (int i = 0; i < barisA; i++)
        C[i] = new int[kolomB];

    // Input Matriks A
    cout << "\nMasukkan Matriks A:\n";
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomA; j++) {
            cin >> A[i][j];
        }
    }

    // Input Matriks B
    cout << "\nMasukkan Matriks B:\n";
    for (int i = 0; i < barisB; i++) {
        for (int j = 0; j < kolomB; j++) {
            cin >> B[i][j];
        }
    }

    // Proses perkalian matriks
    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            C[i][j] = 0;

            for (int k = 0; k < kolomA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Menampilkan hasil menggunakan pointer
    cout << "\nHasil Perkalian Matriks A dan B:\n";

    for (int i = 0; i < barisA; i++) {
        for (int j = 0; j < kolomB; j++) {
            cout << *(*(C + i) + j) << " ";
        }
        cout << endl;
    }

    // Menghapus memori array dinamis
    for (int i = 0; i < barisA; i++) {
        delete[] A[i];
        delete[] C[i];
    }

    for (int i = 0; i < barisB; i++) {
        delete[] B[i];
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
