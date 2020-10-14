																										  #include <iostream.h>
#include <conio.h>

void main()
{
 int menu;
 int menu_minum;
 int qty;
 int long harga;
 int long total, diskon, grand_total;
 int long bayar, kembali;

 cout<<"========== Daftar Harga Laptop ========="<<endl;
 cout<<"----------------------------------------"<<endl;
 cout<<"| kode|   Merk Laptop  |      Harga    |"<<endl;
 cout<<"|-----|----------------|---------------|"<<endl;
 cout<<"| 101 | Laptop Asus    |  Rp.5.000.000 |"<<endl;
 cout<<"| 202 | Laptop Acer    |  Rp.4.500.000 |"<<endl;
 cout<<"| 303 | Laptop Sony    |  Rp.3.250.000 |"<<endl;
 cout<<"| 404 | Laptop Lenovo  |  Rp.3.000.000 |"<<endl;
 cout<<"| 505 | Laptop Fujitsu |  Rp.2.900.000 |"<<endl;
 cout<<"----------------------------------------"<<endl;

 cout<<endl;
 cout<<"Masukkan Kode Laptop     : ";
 cin>>menu;


 cout<<"Input jumlah yang dibeli : ";
 cin>>qty;

 switch(menu)
 {
  case 101:
	cout<<endl;
	cout<<"Bonus : flashdisk"<<endl;

	harga = 5000000;
  break;

  case 202:
	cout<<endl;
	cout<<"Bonus : rolling pad"<<endl;

	harga = 4500000;
  break;

  case 303:
	cout<<endl;
	cout<<"Bonus : sound system"<<endl;

	harga = 3250000;

  break;

  case 404:
	cout<<endl;
	cout<<"Bonus : Modem"<<endl;

	harga = 3000000;

  break;

  case 5:
	cout<<endl;
	cout<<"Bonus            : Sambal Terasi"<<endl;

	harga = 2900000;

  break;

  default:
	cout<<"Inputan Tidak Tersedia ! "<<endl;
  break;
 }

 total = harga * qty;

 if(qty > 5)
 {
  diskon = 0.10 * total;
 }
 else
 {
  diskon = 0;
 }

 grand_total = total - diskon;

 cout<<endl;
 cout<<"Pilihan menu       = No."<<menu<<endl;
 cout<<"Harga              = Rp."<<harga<<endl;
 cout<<"Jumlah yang dibeli = "<<qty<<endl;
 cout<<"Total              = Rp."<<total<<endl;
 cout<<"Diskon             = Rp."<<diskon<<endl;
 cout<<"Total Harga        = Rp."<<grand_total<<endl;

 cout<<endl;
 cout<<"Jumlah Bayar       = Rp.";
 cin>>bayar;

 kembali = bayar - grand_total;

 cout<<endl;
 cout<<"Kembalian          = Rp."<<kembali<<endl<<endl;;

 cout<<"Terima Kasih Telah Berkunjung di"<<endl;
 cout<<"Warung Makan Spesial Sambal (SS)"<<endl;

 getch();
}