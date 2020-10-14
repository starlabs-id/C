#include <iostream.h>
#include <conio.h>

void main()
{
	int a,b,c; //paket laundry
	char kaos,kemeja,jaket,celana; //personal laundry
	char pilih;
	char paket;
	int personal_kaos, personal_kemeja, personal_jaket, personal_celana;
	char paket_a, paket_b, paket_c;


	cout << "============= Grow Laundry ============"<<endl<<endl;
	cout << "Personal Laundry"<<endl<<endl;
	cout << "Kaos     : Rp.1.500"<<endl;
	cout << "Kemeja   : RP.2.500"<<endl;
	cout << "Jaket    : Rp.4.000"<<endl;
	cout << "Celana   : Rp.4.500"<<endl;
	cout << "======================================="<<endl<<endl;

	cout << "============ Paket Laundry ============"<<endl;
	cout << "---------------------------------------"<<endl;
	cout << "| Paket | Jenis Pakaian |    Harga    |"<<endl;
	cout << "|-------------------------------------|"<<endl;
	cout << "|       |  Kaos   = 3   |             |"<<endl;
	cout << "|   A   |  Kemeja = 2   |  Rp.15.000  |"<<endl;
	cout << "|       |  Jaket  = 1   |             |"<<endl;
	cout << "|       |  Celana = 1   |             |"<<endl;
	cout << "|-------------------------------------|"<<endl;
	cout << "|       |  kaos   = 4   |             |"<<endl;
	cout << "|   B   |  Kemeja = 2   |  Rp.20.000  |"<<endl;
	cout << "|       |  Jaket  = 2   |             |"<<endl;
	cout << "|       |  Celana = 1   |             |"<<endl;
	cout << "|-------------------------------------|"<<endl;
	cout << "|       |  Kaos   = 5   |             |"<<endl;
	cout << "|   C   |  Kemeja = 3   |  Rp.25.000  |"<<endl;
	cout << "|       |  Jaket  = 1   |             |"<<endl;
	cout << "|       |  Celana = 2   |             |"<<endl;
	cout << "|-------------------------------------|"<<endl;


	cout << "Apakah Anda ingin memilih Paket Laundry ? [Y/T] : ";
	cin>>pilih;

	if (pilih == 'Y' || pilih == 'y')
	{
	cout << "Masukkan Paket : ";
	cin>>paket;
	}
	else
	{
	cout << "Masukkan Jumlah Kaos   : ";
	cin>>personal_kaos;
	cout << "Masukkan Jumlah Kemeja : ";
	cin>>personal_kemeja;
	cout << "Masukkan Jumlah Jaket  : ";
	cin>>personal_jaket;
	cout << "Masukkan Jumlah Celana : ";
	cin>>personal_celana;
	}



	getch();
	}