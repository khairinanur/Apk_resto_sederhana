#include <iostream>
using namespace std;

int main(){
	
	
	char nama[30], pembeli[30];
	int harga, jumlah, total, jumtotal, jumbayar, kembalian, potongan;
	string input, kode;
	
	awal:
	cout <<"		TOKO ELEKTRONIK INJI		"<<endl;
	cout <<"================================================="<<endl;
	cout <<"Nama Pembeli	:";
	cin >> pembeli;
	cout << "Pilihan Barang Yang Tersedia"<<endl;
	cout << "001 - Laptop Asus RAM 4GB - RP.6000.000"<<endl; 
	cout << "002 - Mouse Wireless - RP.200.000"<<endl;
	cout << "003 - Mikrotik RB - RP.700.000"<<endl;
	
	
	cout << endl;
	cout << endl;
	cout << "Barang yang dipilih\t:";	
	cin >> kode;
	cout << "Jumlah Beli\t:";
	cin >> jumlah;
	
	
	if (kode == "001"){
		cout << "Laptop Asus RAM 4GB";
		harga = 6000000;
	} else if (kode == "002") {
	
		cout << "Mouse Wireless";
		harga = 200000;
    } else if (kode == "003") {
	
		cout << "Mikrotik RB";
		harga = 700000;
    } else {
	
    	cout << "Barang yang dipilih tidak tersedia";
    }
	
	cout << endl;
	cout << "===================================================="<<endl;
	cout << "Struk Pembayaran"<<endl;
	cout << "===================================================="<<endl;
	cout << "Nama Pembeli		:"<<pembeli<<endl;
	cout << "Harga				:"<<harga<<endl;
	cout << "Jumlah				:"<<jumlah<<endl;
	
	
	total = harga * jumlah;
	cout << "Total		:"<<total<<endl;
	
	cout <<endl;
	
	if (total == 100000 || total < 500000){
		potongan = 0.05 * total;
   } else if (total > 500000){
		potongan = 0.10 * total;
   } else {
   		potongan = 0;
   }
	
	cout <<"potongan 		:"<<potongan<<endl;
	cout << "=================================="<<endl;
	
	jumtotal = total-potongan;
	
	cout << "Total Keseluruhan	:"<<jumtotal<<endl;
	cout << "Uang Bayar		:";
	cin >> jumbayar;
	
	kembalian = jumbayar - jumtotal;	
	cout << "Uang Kembalian : "<<kembalian<<endl;
	cout << "=================================================="<<endl;
	
	cout << "Mau Input Lagi [Y/N] : ";
	cin >> input;
	
	if (input == "y" || input =="Y"){
		goto awal;
	}else
		return 0;
	
	}

