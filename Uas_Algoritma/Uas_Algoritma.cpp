#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Jurusan : ";
		getline(cin, jurusan[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};

//isi disini

void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa > 0) {
		cout << "\nDaftar Mahasiswa: " << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM: " << NIM[i] << endl;
			cout << "Nama: " << nama[i] << endl;
			cout << "Jurusan: " << jurusan[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
		}
	}
	else {
		cout << "Belum ada data mahasiswa." << endl;
	}
};

void algorithmacariMahasiswaByNIM() {

};

void algorithmaSortByTahunMasuk() {

};

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}

/*2. Insertionsort dan linearsearch
*/

/*3. Perbedaan mendasar antara algoritma queue dan stack terdapat dari
struktur data yang digunakan queue menggunakan FIFO ( First In First Out )
sedangkan stack menggunakan LIFO ( Last In First Out )
*/

/*4. Yaitu memuat secara detail semua elemen sehingga pada saat mengimplementasikan 
insertion dan delete, elemen terakhir yang ingin
dihapus itu menjadi yang pertama yang keluar.

Contohnya seperti tumpukkan piring di rak, piring pertama masuk dan yang menjadi 
piring terakhir atau piring paling atas akan diambil terlebih dahulu.
*/

/*5. a) Level 5 Kedalaman

b)	In = Salah ( 1 8 5 10 12 15 20 22 25 28 30 36 38 40 45 50 48 )
	Preorder = Benar
	Post = Benar

*/