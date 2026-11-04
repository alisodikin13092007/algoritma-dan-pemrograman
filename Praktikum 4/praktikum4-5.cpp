#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main(){
    double totalMakanan, totalTransportasi, totalHiburan, totalLainya, totalMinggu, totalTerbesar;
    int again;
    do{
        totalMakanan = 0, totalTransportasi = 0, totalHiburan = 0, totalLainya = 0;
        totalMinggu = 0;
        totalTerbesar = 0;
        again = 0;
        string kategoriTerbesar = "";
        

     for(int i = 1; i <= 7; i++)
     {
        string kategori;
        double jumlah;
        cout << "Masukkan kategori pengeluaran hari ke- " << i << "(Makanan/Transportasi/Hiburan/Lain-lainya): "; cin >> kategori;
        cout << "Masukkan jumlah pengeluaran: Rp"; cin >> jumlah;

        if (kategori == "Makanan"){
            totalMakanan += jumlah;
        }else if (kategori == "Transportasi"){
            totalTransportasi += jumlah;
        }else if (kategori == "Hiburan"){
            totalHiburan += jumlah;
        }else {
            totalLainya += jumlah;
        }
        totalMinggu += jumlah;
        if (jumlah > totalTerbesar){
            totalTerbesar = jumlah;
            kategoriTerbesar = kategori;
        }
     }
     cout << fixed << setprecision(2) << "Total Pengeluaran Makanan: Rp" << totalMakanan << endl; 
     cout << fixed << setprecision(2) << "Total Pengeluaran Transportasi: Rp" << totalTransportasi << endl; 
     cout << fixed << setprecision(2) << "Total Pengeluaran Hiburan: Rp" << totalHiburan<< endl; 
     cout << fixed << setprecision(2) << "Total Pengeluaran Lainnya: Rp" << totalLainya << endl; 
     cout << fixed << setprecision(2) << "Total Pengeluaran Selama Seminggu: Rp" << totalMinggu << endl; 
     cout << fixed << setprecision(2) << "Total Pengeluaran Terbesar: Rp" << totalTerbesar << " Pada Kategori: " << kategoriTerbesar << endl;

     cout << "Ingin mencatat pengeluaran minggu lain? (1 untuk ya, selain itu untuk tidak): "; cin >> again;
    }while (again == 1);
    return 0;
}