#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;

    string tanggal[MAX];
    string keterangan[MAX];
    string jenis[MAX];
    long long jumlah[MAX];
    int jumlahData = 0;
    int menu;

    do {
        cout << "\n===== PROGRAM PENGELOLAAN KEUANGAN PRIBADI =====\n";
        cout << "1. Tambah Data\n";
        cout << "2. Lihat Data\n";
        cout << "3. Edit Data\n";
        cout << "4. Hapus Data\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> menu;

        if (menu == 1) {
            cout << "Masukkan tanggal (dd/mm/yyyy): ";
            cin >> tanggal[jumlahData];

            cout << "Masukkan keterangan: ";
            cin >> ws;
            getline(cin, keterangan[jumlahData]);

            cout << "Jenis (Pemasukan/Pengeluaran): ";
            cin >> jenis[jumlahData];

            cout << "Masukkan jumlah (Rp): ";
            cin >> jumlah[jumlahData];

            jumlahData++;
            cout << "Data ditambahkan.\n";
        }

        else if (menu == 2) {
            if (jumlahData == 0) {
                cout << "Belum ada data.\n";
            } else {
                long long totalMasuk = 0, totalKeluar = 0;

                cout << "\n=====================================================================================================\n";
                cout << left << setw(5) << "No"
                     << setw(15) << "Tanggal"
                     << setw(30) << "Keterangan"
                     << setw(20) << "Jenis"
                     << setw(20) << "Jumlah (Rp)"
                     << "\n=====================================================================================================\n";

                for (int i = 0; i < jumlahData; i++) {
                    cout << left << setw(5) << (i + 1)
                         << setw(15) << tanggal[i]
                         << setw(30) << keterangan[i]
                         << setw(20) << jenis[i]
                         << setw(20) << jumlah[i]
                         << "\n";

                    if (jenis[i] == "Pemasukan" || jenis[i] == "pemasukan")
                        totalMasuk += jumlah[i];
                    else
                        totalKeluar += jumlah[i];
                }

                cout << "=====================================================================================================\n";
                cout << "Total Pemasukan   : Rp " << totalMasuk << endl;
                cout << "Total Pengeluaran : Rp " << totalKeluar << endl;
                cout << "Saldo Akhir       : Rp " << (totalMasuk - totalKeluar) << endl;
                cout << "=====================================================================================================\n";
            }
        }

        else if (menu == 3) {
            int pilih;
            cout << "Nomor data yang ingin diedit: ";
            cin >> pilih;

            if (pilih > 0 && pilih <= jumlahData) {
                int i = pilih - 1;

                cout << "Tanggal baru: ";
                cin >> tanggal[i];

                cout << "Keterangan baru: ";
                cin >> ws;
                getline(cin, keterangan[i]);

                cout << "Jenis baru: ";
                cin >> jenis[i];

                cout << "Jumlah baru (Rp): ";
                cin >> jumlah[i];

                cout << "Data diupdate.\n";
            } else {
                cout << "Nomor tidak valid.\n";
            }
        }

        else if (menu == 4) {
            int pilih;
            cout << "Nomor data yang ingin dihapus: ";
            cin >> pilih;

            if (pilih > 0 && pilih <= jumlahData) {
                int idx = pilih - 1;

                for (int i = idx; i < jumlahData - 1; i++) {
                    tanggal[i]    = tanggal[i+1];
                    keterangan[i] = keterangan[i+1];
                    jenis[i]      = jenis[i+1];
                    jumlah[i]     = jumlah[i+1];
                }

                jumlahData--;
                cout << "Data dihapus.\n";
            } else {
                cout << "Nomor tidak valid.\n";
            }
        }

    } while (menu != 5);

    cout << "\nProgram selesai.\n";
    return 0;
}

