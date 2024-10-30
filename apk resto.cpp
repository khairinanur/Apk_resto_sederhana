#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

#define ppn 0.15 // PPN =10%
const int diskon = 10000;

int main(){
	char nama[50], menu[20], back;
	int jumlah, makanan, makan, total, bayar, kurang, bonus, pajak, kembalian,
		harga[5]={15000, 18000, 24000, 14000, 18000}, i= 0;
	bool saldo;
	
	do{
	system("CLS");
	cout<<"=========================================== Vini oishi ========================================="<<endl;
	cout<<"=========================================  Sushi dan Ramen ====================================="<<endl;
	cout<<endl;
	cout<<"Masukkan Nama Anda : " ; cin>>nama;
	cout<<"Pilihan menu yang tersedia---"<<endl;
	cout<<"---------------------------------------------------------------------"<<endl;
	cout<<"|	[1] Smoked beef sushi		\t: Rp 15.000 \t						|"<<endl;
	cout<<"|	[2] Tamago sushi			\t: Rp 18.000 \t						|"<<endl;
	cout<<"|	[3] Salmon mentai sushi		\t: Rp 24.000 \t						|"<<endl;
	cout<<"|	[4] Sushi crabstick roll	\t: Rp 14.000 \t						|"<<endl;
	cout<<"|	[5] Ramen spicy				\t: Rp 18.000 \t						|"<<endl;
	cout<<"---------------------------------------------------------------------"<<endl;
	
	
	cout<<"			(Masukkan Menu Makanan berdasarkan Nomor)"<<endl;
	cout<<" Silahkan Pilih Makanan anda :"; cin >> makanan;
	
	
	//Percabangan
	switch(makanan){
		case 1:
			strcpy(menu,"Smoked beef sushi");
			break;
		case 2:
			strcpy(menu,"Tamago sushi");
			i=1;
			break;
		case 3:
			strcpy(menu,"Salmon mentai sushsi");
			i=2;
			break;
		case 4:
			strcpy(menu,"Sushi crabstick roll");
			i=3;
			break;
		case 5:
			strcpy(menu,"Ramen spicy");
			i=4;
			break;
		default:
			cout << "Pilihan menu yang anda pilih tidak tersedia..." <<endl;
			goto ulang;	
	}
	
	cout<<" Anda memilih " << menu <<endl;
	cout<<endl;
	cout<<" Jumlah makanan yang di beli : ";cin>> jumlah;
	
	makan = jumlah * harga[i];
	pajak	= makan * ppn;
	total	= pajak + makan;
	cout << endl;
	cout << "-------------------------------------------------------" <<endl;
	cout << "|				Vini Oishi Mangun Jaya		   			|"<<endl;
	cout << "-------------------------------------------------------" <<endl;
	cout << "\t Nama Pemesan				\t:"		<< nama 	<<endl;
	cout << "\t Menu Makanan				\t:"		<< menu		<<endl;
	cout << "\t Jumlah Makanan				\t:"		<< jumlah 	<<" porsi "<<endl;
	cout << "\t Harga Makanan				\t:"		<< harga[i]	<<" * " << jumlah <<endl;
	cout << "\t Pajak Restaurant			\t:"		<< pajak 	<<endl;
	cout << "\t Total Pembayaran			Rp\t:"	<< total 	<<endl;
	
	if(jumlah>=4){
		bonus = total - diskon;
		total = bonus;
		cout << endl;
		cout << "# Anda mendapatkan diskon Potongan Harga : Rp " << diskon <<"#"<< endl;
		cout << "Total Pembayaran Setelah diskon : Rp "<< total << endl;
	}
	
	cout << "-------------------------------------------" << endl;
	cout << "Silahkan bayar disini		Rp.";		   cin>>bayar;
	
	
	//Perulangan
	while (saldo=bayar<total){
		cout << "Saldo anda kurang, Silahkan melakukan pembayaran lagi : Rp. "; cin>>kurang;
	};
	
	kembalian=bayar-total;
	cout << "Uang yang anda bayar \t\t\t  Rp. " <<bayar<<endl;
	cout << "Uang kembalian  Rp. " 		<<bayar<<endl;
	cout << "###################################################"<<endl;
	
	ulang:
		cout << "			[Y = ya / T = tidak]"<<endl;
		cout << "		Apakah anda ingin memesan lagi ? [Y/T =  "; cin>>back;
	}while (back=='Y' ||back=='y');
	cout << endl;
	cout << "		Terimakasih telah Memesan Makanan di Vini Oishi"<<endl;
	cout << "			Selamat Menikmati"<<endl;
	
	
	
	return 0;
}

