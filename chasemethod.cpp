#include <iostream>
#include <string>

using namespace std;

// Enumerasi untuk jumlah maksimum mahasiswa dan nilai
enum { MAX_MAHASISWA = 100 };
enum { JUMLAH_NILAI = 4 };

// Struct Mahasiswa
struct Mahasiswa {
    string nama;
    int nilai[JUMLAH_NILAI];
    int jumlah_nilai;
};

int main() {
    int jumlah_mahasiswa;
    Mahasiswa daftar_mahasiswa[MAX_MAHASISWA];

    cout << "Masukkan Jumlah Mahasiswa: ";
    cin >> jumlah_mahasiswa;

    // Input nama dan nilai mahasiswa
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        cout << "Mahasiswa ke-" << i+1 << ":\n";
        cout << "Nama: ";
        cin >> daftar_mahasiswa[i].nama;
        cout << "Masukkan " << JUMLAH_NILAI << " nilai untuk mahasiswa ini (dipisahkan spasi):\n";
        for (int j = 0; j < JUMLAH_NILAI; ++j) {
            cin >> daftar_mahasiswa[i].nilai[j];
        }
        daftar_mahasiswa[i].jumlah_nilai = JUMLAH_NILAI;
    }
      cout << "\nMasukkan jumlah mahasiswa: "  << jumlah_mahasiswa << endl;
    // Menghitung total nilai dan menampilkan hasil
    for (int i = 0; i < jumlah_mahasiswa; ++i) {
        int total_nilai = 0;
        for (int j = 0; j < daftar_mahasiswa[i].jumlah_nilai; ++j) {
            total_nilai += daftar_mahasiswa[i].nilai[j];
        }
        
        cout << "\nMahasiswa: " << daftar_mahasiswa[i].nama << "\n";
        cout << "Nilai: ";
        for (int j = 0; j < daftar_mahasiswa[i].jumlah_nilai; ++j) {
            cout << daftar_mahasiswa[i].nilai[j] << " ";
        }
        cout << "\nTotal Nilai " << daftar_mahasiswa[i].nama << ": " << total_nilai << "\n";
    }

    return 0;
}
