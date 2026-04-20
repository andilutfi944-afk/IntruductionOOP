#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData() {
        cout << "Nama Barang     : " << nama << endl;
        cout << "Jumlah          : " << jumlah << endl;
        cout << "Kategori        : " << kategori << endl;
        cout << "Tanggal Produksi: " << tanggalProduksi << endl;
    }
}; //batas class

int main() {
    //objek 1: elektronik
    Barang elektronik;
    elektronik.nama                 = "Laptop Victus";
    elektronik.jumlah               = 5;
    elektronik.kategori             = "Elektronik";
    elektronik.tanggalProduksi      = "2025-20-04";

    //objek 2: nonElektronik
    Barang nonElektronik;
    nonElektronik.nama              = "Buku";
    nonElektronik.jumlah            = 20;
    nonElektronik.kategori          = "Non-Elektronik";
    nonElektronik.tanggalProduksi   = "2025-20-04";
    
}