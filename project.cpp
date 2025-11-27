#include <iostream>
using namespace std;
//function


// data
string tanggal[50], jenis[50];
int jumlah[50];
int total = 0;
int main() {
    int pilih;

    do {
        cout << "=== PROGRAM KEUANGAN SEDERHANA ===" <<endl;
        cout << "1. Tambah Data"<<endl;
        cout << "2. Lihat Data"<<endl;
        cout << "3. Edit Data"<<endl;
        cout << "4. Hapus Data"<<endl;
        cout << "5. Keluar"<<endl;
        cout << "Pilih: ";
        cin >> pilih;

        if (pilih == 1) {
            cout << "Tanggal (dd/mm/yyyy) : ";
            cin >> tanggal[total];
            cout << "Jenis (Pemasukan/Pengeluaran) : ";
            cin >> jenis[total];
            cout << "Jumlah : ";
            cin >> jumlah[total];
            total++;
            cout << "Data berhasil ditambah!"<<endl;
        }

        else if (pilih == 2) {
            cout << "=== DATA TRANSAKSI ==="<<endl;
            if (total == 0) cout << "Belum ada data.";

            for (int i = 0; i < total; i++) {
                cout << "Data ke-" << i + 1 << endl;
                cout << "Tanggal : " << tanggal[i] << endl;
                cout << "Jenis   : " << jenis[i] << endl;
                cout << "Jumlah  : " << (jumlah[i]) << endl;
            }
        }
    }while (pilih != 5);
    return 0;
}