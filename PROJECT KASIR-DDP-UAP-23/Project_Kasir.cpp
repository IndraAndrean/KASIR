#include <iostream>
using namespace std;
    void perkenalan() {
    cout << "SELAMAT DATANG DITOKO INDRAMAZ" << endl;
	cout << "Berikut Daftar Pilihan Barang Yang Tersedia" << endl;
	cout << " ======================================================================================== " << endl << endl;
	cout << "					DAFTAR MENU 						 " << endl << endl;
	cout << "01. Chocolatos		: Rp. 17.000	"     << " 	06. Mamypoko 	 : Rp. 37.000" << endl;
	cout << "02. Susu Bebelac 	: Rp. 150.000	"     << "	07. Gula 	 : Rp. 20.000" << endl;
	cout << "03. Minyak Goreng 	: Rp. 18.000	" 	  << " 	08. Yupi 	 : Rp. 15.000" << endl;
	cout << "04. Ultra Milk 		: Rp. 7.000	" << " 	09. Kinder Joy	 : Rp. 15.000" << endl;
	cout << "05. Telor Bebek		: Rp. 30.000	" << " 	10. Selesai " << endl;
	cout << " ======================================================================================== " << endl << endl;
	cout << "UNTUK MEMILIH BARANG YANG AKAN DIBELI SILAKAN MASUKAN KODE BARANG DAN KLIK 10 UNTUK MENGAKHIRI PESANAN"<< endl << endl;
    }
int main(){
	char pembeli[30];
	int kode_barang, jml_barang, harga, total, bayar, diskon;
	string item;
	
	awal:
	perkenalan();
		cout << "SEBELUM MELAKUKAN PEMESANAN MASUKAN NAMA PANGGILAN ANDA DIBAWAH INI" << endl;
	    cout << "NAMA PEMBELI	: ";
	    cin >> pembeli;
	do{
		cout << "KODE BARANG	: ";
		cin >> kode_barang;
		
		switch(kode_barang){
			case 1 :
				item = "Chocolatos";
				harga = 17000;
				cout << "jumlah barang	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
				
			case 2 :
				item = "Susu Bebelac";
				harga = 150000;
				cout << "jumlah barang	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
			case 3 :
				item = "Minyak Goreng";
				harga = 18000;
				cout << "jumlah barang	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
			case 4 :
				item = "Ultra Milk";
				harga = 7000;
				cout << "jumlah barang	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
			case 5 :
				item = "Telor Bebek";
				harga = 30000;
				cout << "jumlah barang	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
			case 6 :
				item = "Mamypoko";
				harga = 37000;
				cout << "jumlah barang	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
			case 7 :
				item = "Gula";
				harga = 20000;
				cout << "jumlah barang	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
			case 8 :
				item = "Yupi";
				harga = 15000;
				cout << "jumlah barang 	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
			case 9 :
				item = "Kinder Joy";
				harga = 15000;
				cout << "jumlah barang 	: ";
				cin >> jml_barang;
				total += harga * jml_barang;
				cout << jml_barang << " " << item << " = Rp. " << harga * jml_barang << endl << endl;
				break;
			case 10 :
				if(total >= 100000) {
					diskon = 0.06 * total;
				} else if(total >= 50000) {
					diskon = 0.04 * total;
				} else if(total >= 25000) {
					diskon =0.02 * total;
				} else {
					diskon = 0;
				}
				cout << endl << endl;
				cout << "Total Harga		: " << total << endl;
				cout << "Total Diskon 		: " << diskon << endl;
				cout << "Jumlah Bayar	 	: " << total - diskon << endl;
				cout << "Bayar 			: ";
				cin >> bayar;
				
				cout << endl << endl;
				cout << "===========================================" << endl;
				cout << "Struk Pembayaran" << endl;
				cout << "===========================================" << endl;
				cout << "Nama Pembeli 	: " << pembeli << endl;
				cout << "Total Harga	    : " << total << endl;
				cout << "Total Diskon 	    : " << diskon << endl;
				cout << "Total Bayar 	    : " << total - diskon << endl;
				cout << "Bayar 			  : " << bayar << endl;
				cout << "kembalian	 	  : " << (bayar - (total-diskon)) << endl;
				cout << "Terima Kasih Udah Belanja ditoko kami ditunggu kedatangannya lagi" << endl;
				break;
				
			default :
				cout << "pilihan anda salah!" << endl;
				break;
		}
	} while(kode_barang != 10);
		
}
