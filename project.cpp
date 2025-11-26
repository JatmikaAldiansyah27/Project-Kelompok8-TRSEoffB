#include <iostream>
using namespace std;
//function


// data
int main() {
    int pilih;

    do {
        cout << "=== PROGRAM KEUANGAN SEDERHANA ===";
        cout << "1. Tambah Data";
        cout << "2. Lihat Data";
        cout << "3. Edit Data";
        cout << "4. Hapus Data";
        cout << "5. Keluar";
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
            cout << "Data berhasil ditambah!";
        }

        else if (pilih == 2) {
            cout << "=== DATA TRANSAKSI ===";
            if (total == 0) cout << "Belum ada data.";

            for (int i = 0; i < total; i++) {
                cout << "Data ke-" << i + 1 << endl;
                cout << "Tanggal : " << tanggal[i] << endl;
                cout << "Jenis   : " << jenis[i] << endl;
                cout << "Jumlah  : " << rupiah(jumlah[i]) << endl;
            }
        }

        else if (pilih == 3) {
            int no;
            cout << "Edit data nomor: ";
            cin >> no;
            no--;

            cout << "Tanggal baru : ";
            cin >> tanggal[no];
            cout << "Jenis baru   : ";
            cin >> jenis[no];
            cout << "Jumlah baru  : ";
            cin >> jumlah[no];

            cout << "Data berhasil diedit!";
        }

        else if (pilih == 4) {
            int no;
            cout << "Hapus data nomor: ";
            cin >> no;
            no--;

            for (int i = no; i < total - 1; i++) {
                tanggal[i] = tanggal[i + 1];
                jenis[i] = jenis[i + 1];
                jumlah[i] = jumlah[i + 1];
            }
            total--;
            cout << "Data berhasil dihapus!";
        }

        else if (pilih == 5) {
            cout << "Program selesai.";
        }

        else {
            cout << "Pilihan tidak valid!";
        }
    }
    return 0;
}