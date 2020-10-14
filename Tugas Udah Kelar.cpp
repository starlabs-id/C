#include <iostream.h>
#include <conio.h>

void main()
{
	awal:
	clrscr();

	char kembali;
	char pilih;
	int seri, phe;
	int qty, qty_phe;
	int long harga, harga_phe;
	int long total, total_phe;
	int long diskon, diskon_phe, total_bayar;
	int long bayar, kembalian;


	cout<<"============================================================"<<endl;
	cout<<"                        SELAMAT DATANG DI                   "<<endl;
	cout<<"                          DEPO LAPTOP                       "<<endl;
	cout<<"                      Jalan Raya Teuku Umar                 "<<endl;
	cout<<"============================================================"<<endl<<endl;

	cout<<"==================== Daftar Harga Laptop ==================="<<endl;
	cout<<"------------------------------------------------------------"<<endl;
	cout<<"| No.| No. Seri |        Merk Laptop        |      Harga    |"<<endl;
	cout<<"|----|----------|---------------------------|---------------|"<<endl;
	cout<<"|  1 |   57     | Acer Aspire One Happy     |  Rp.1.388.000 |"<<endl;
	cout<<"|  2 |   431    | Acer Aspire V5-431        |  Rp.3.500.000 |"<<endl;
	cout<<"|  3 |   4730   | Acer Aspire 4730Z         |  Rp.4.500.000 |"<<endl;
	cout<<"|  4 |   4750   | Acer Aspire 4750          |  Rp.3.200.000 |"<<endl;
	cout<<"|  5 |   200    | Asus X200CA               |  Rp.2.935.500 |"<<endl;
	cout<<"|  6 |   1015   | Asus Eee PC 1015B         |  Rp.1.427.000 |"<<endl;
	cout<<"|  7 |   1215   | Asus Eee PC 1215B         |  Rp.2.000.000 |"<<endl;
	cout<<"|  8 |   10     | Laptop Lenovo IdeaPad S10 |  Rp.1.500.000 |"<<endl;
	cout<<"|  9 |   215    | Lenovo IdeaPad S215       |  Rp.2.899.000 |"<<endl;
	cout<<"| 10 |   4070   | Lenovo IdeaPad G4070      |  Rp.3.149.000 |"<<endl;
	cout<<"| 11 |   700    | Apple MacBook Pro MC700ZA |  Rp.7.000.000 |"<<endl;
	cout<<"-------------------------------------------------------------"<<endl<<endl;

	cout<<"----------------------------------------------------"<<endl;
	cout<<"| No.| No. Seri | Jenis Pheriperal |      Harga    |"<<endl;
	cout<<"|----|----------|------------------|---------------|"<<endl;
	cout<<"|  1 |    001   |      Modem       |   Rp.300.000  |"<<endl;
	cout<<"|  2 |    002   |   Rolling Pad    |   Rp. 60.000  |"<<endl;
	cout<<"|  3 |    003   |  Flashdisk 8Gb   |   Rp. 65.000  |"<<endl;
	cout<<"|  4 |    004   | Sound system mini|   Rp. 85.000  |"<<endl;
	cout<<"----------------------------------------------------"<<endl<<endl;

	cout<<"Apakah Anda ingin melihat spesifikasi laptop ? [Y/T] : ";
	cin>>pilih;
	cout<<endl;

	if (pilih == 'Y' || pilih == 'y')
	{
	cout<<"1. Nomor Seri Laptop      : 57 "<<endl;
	cout<<"   Merk Laptop            : Laptop Acer Aspire One Happy N57C"<<endl;
	cout<<"   Spesifikasi            : Intel Atom N570, 1.6 GHz "<<endl;
	cout<<"                            RAM 1 GB"<<endl;
	cout<<"                            320 HDD"<<endl;
	cout<<"                            Netbook, 14 Inch"<<endl;

	cout<<"2. Nomor Seri Laptop      : 431 "<<endl;
	cout<<"   Merk Laptop            : Laptop Acer Aspire V5-431"<<endl;
	cout<<"   Spesifikasi            : Intel Pentium dual-core, 1.5 GHz"<<endl;
	cout<<"                            RAM 2 GB"<<endl;
	cout<<"                            500 HDD"<<endl;
	cout<<"                            Notebook, 14 Inch"<<endl;

	cout<<"3. Nomor Seri Laptop      : 4730 "<<endl;
	cout<<"   Merk Laptop            : Laptop Acer Aspire 4730Z"<<endl;
	cout<<"   Spesifikasi            : Intel Pentium dual-core, 2 GHz"<<endl;
	cout<<"                            RAM 1 GB"<<endl;
	cout<<"                            250 HDD"<<endl;
	cout<<"                            Notebook, 14 Inch"<<endl;

	cout<<"4. Nomor Seri Laptop      : 4750 "<<endl;
	cout<<"   Merk Laptop            : Laptop Acer Aspire 4750"<<endl;
	cout<<"   Spesifikasi            : Core i3, 2.10 GHz"<<endl;
	cout<<"                            RAM 2 GB"<<endl;
	cout<<"                            500 HDD"<<endl;
	cout<<"                            Notebook, 14 Inch"<<endl;

	cout<<"5. Nomor Seri Laptop      : 200 "<<endl;
	cout<<"   Merk Laptop            : Laptop Asus X200CA"<<endl;
	cout<<"   Spesifikasi            : core i3, 1.5 GHz"<<endl;
	cout<<"                            RAM 4 GB"<<endl;
	cout<<"                            500 HDD"<<endl;
	cout<<"                            Notebook, 11.6 Inch"<<endl;

	cout<<"6. Nomor Seri Laptop      : 1015 "<<endl;
	cout<<"   Merk Laptop            : Laptop Asus Eee PC 1015B"<<endl;
	cout<<"   Spesifikasi            : AMD Fusion C30, 1.2 GHz"<<endl;
	cout<<"                            RAM 2 GB"<<endl;
	cout<<"                            250 HDD"<<endl;
	cout<<"                            Netbook, 10 Inch"<<endl;

	cout<<"7. Nomor Seri Laptop      : 1215 "<<endl;
	cout<<"   Merk Laptop            : Laptop Asus Eee PC 1215B"<<endl;
	cout<<"   Spesifikasi            : AMD Fusion E450, 1.65 GHz"<<endl;
	cout<<"                            RAM 2 GB"<<endl;
	cout<<"                            250 HDD"<<endl;
	cout<<"                            Netbook, 12 Inch"<<endl;

	cout<<"8. Nomor Seri Laptop      : 10 "<<endl;
	cout<<"   Merk Laptop            : Laptop Lenovo IdeaPad S10"<<endl;
	cout<<"   Spesifikasi            : Intel Atom N270, 1.6 GHz"<<endl;
	cout<<"                            RAM 1 GB"<<endl;
	cout<<"                            160 HDD"<<endl;
	cout<<"                            Netbook, 10 Inch"<<endl;

	cout<<"9. Nomor Seri Laptop      : 215 "<<endl;
	cout<<"   Merk Laptop            : Laptop Lenovo IdeaPad S215"<<endl;
	cout<<"   Spesifikasi            : AMD Dual-Core, 1.65 GHz"<<endl;
	cout<<"                            RAM 500 GB"<<endl;
	cout<<"                            4 HDD"<<endl;
	cout<<"                            Notebook, 11.6 Inch"<<endl;

	cout<<"10. Nomor Seri Laptop      : 4070 "<<endl;
	cout<<"    Merk Laptop            : Laptop Lenovo IdeaPad G4070"<<endl;
	cout<<"    Spesifikasi            : Core i7, 1.6 GHz"<<endl;
	cout<<"                             RAM 4 GB"<<endl;
	cout<<"                             500 HDD"<<endl;
	cout<<"                             Notebook, 14 Inch"<<endl;

	cout<<"11. Nomor Seri Laptop      : 700 "<<endl;
	cout<<"    Merk Laptop            : Laptop Apple MacBook Pro MC700ZA"<<endl;
	cout<<"    Spesifikasi            : Core i5, 2.30GHz"<<endl;
	cout<<"                             RAM 4 GB"<<endl;
	cout<<"                             320 HDD"<<endl;
	cout<<"                             Notebook, 13.3 Inch"<<endl<<endl;

	cout<<"Masukkan No. Seri Laptop :";
	cin>>seri;
	}
	else
	{
	cout<<"Masukkan No. Seri Laptop :";
	cin>>seri;
	}

	cout<<"Jumlah yang dibeli       :";
	cin>>qty;
	cout<<endl;

	cout<<"Masukkan seri pheriperal :";
	cin>>phe;

	cout<<"jumlah yang dibeli       :";
	cin>>qty_phe;



	cout<<endl;

	cout<<"==========================================================";

		switch(seri)
	{
	case 57:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 57 "<<endl;
	cout<<"Merk Laptop            : Laptop Acer Aspire One Happy N57C"<<endl;
	cout<<"Spesifikasi            : Intel Atom N570, 1.6 GHz "<<endl;
	cout<<"                         RAM 1 GB"<<endl;
	cout<<"                         320 HDD"<<endl;
	cout<<"                         Netbook, 14 Inch"<<endl;

	harga=1388000;
	break;

	case 431:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 431 "<<endl;
	cout<<"Merk Laptop            : Laptop Acer Aspire V5-431"<<endl;
	cout<<"Spesifikasi            : Intel Pentium dual-core, 1.5 GHz"<<endl;
	cout<<"                         RAM 2 GB"<<endl;
	cout<<"                         500 HDD"<<endl;
	cout<<"                         Notebook, 14 Inch"<<endl;

	harga=3500000;
	break;


	case 4730:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 4730 "<<endl;
	cout<<"Merk Laptop            : Laptop Acer Aspire 4730Z"<<endl;
	cout<<"Spesifikasi            : Intel Pentium dual-core, 2 GHz"<<endl;
	cout<<"                         RAM 1 GB"<<endl;
	cout<<"                         250 HDD"<<endl;
	cout<<"                         Notebook, 14 Inch"<<endl;

	harga=4500000;
	break;

	case 4750:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 4750 "<<endl;
	cout<<"Merk Laptop            : Laptop Acer Aspire 4750"<<endl;
	cout<<"Spesifikasi            : Core i3, 2.10 GHz"<<endl;
	cout<<"                         RAM 2 GB"<<endl;
	cout<<"                         500 HDD"<<endl;
	cout<<"                         Notebook, 14 Inch"<<endl;

	harga=3200000;
	break;

	case 200:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 200 "<<endl;
	cout<<"Merk Laptop            : Laptop Asus X200CA"<<endl;
	cout<<"Spesifikasi            : core i3, 1.5 GHz"<<endl;
	cout<<"                         RAM 4 GB"<<endl;
	cout<<"                         500 HDD"<<endl;
	cout<<"                         Notebook, 11.6 Inch"<<endl;

	harga=2935500;
	break;

	case 1015:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 1015 "<<endl;
	cout<<"Merk Laptop            : Laptop Asus Eee PC 1015B"<<endl;
	cout<<"Spesifikasi            : AMD Fusion C30, 1.2 GHz"<<endl;
	cout<<"                         RAM 2 GB"<<endl;
	cout<<"                         250 HDD"<<endl;
	cout<<"                         Netbook, 10 Inch"<<endl;
	harga=1427000;
	break;

	case 1215:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 1215 "<<endl;
	cout<<"Merk Laptop            : Laptop Asus Eee PC 1215B"<<endl;
	cout<<"Spesifikasi            : AMD Fusion E450, 1.65 GHz"<<endl;
	cout<<"                         RAM 2 GB"<<endl;
	cout<<"                         250 HDD"<<endl;
	cout<<"                         Netbook, 12 Inch"<<endl;

	harga=2000000;
	break;

	case 10:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 10 "<<endl;
	cout<<"Merk Laptop            : Laptop Lenovo IdeaPad S10"<<endl;
	cout<<"Spesifikasi            : Intel Atom N270, 1.6 GHz"<<endl;
	cout<<"                         RAM 1 GB"<<endl;
	cout<<"                         160 HDD"<<endl;
	cout<<"                         Netbook, 10 Inch"<<endl;

	harga=1500000;
	break;

	case 215:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 215 "<<endl;
	cout<<"Merk Laptop            : Laptop Lenovo IdeaPad S215"<<endl;
	cout<<"Spesifikasi            : AMD Dual-Core, 1.65 GHz"<<endl;
	cout<<"                         RAM 500 GB"<<endl;
	cout<<"                         4 HDD"<<endl;
	cout<<"                         Notebook, 11.6 Inch"<<endl;

	harga=2899000;
	break;

	case 4070:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 4070 "<<endl;
	cout<<"Merk Laptop            : Laptop Lenovo IdeaPad G4070"<<endl;
	cout<<"Spesifikasi            : Core i7, 1.6 GHz"<<endl;
	cout<<"                         RAM 4 GB"<<endl;
	cout<<"                         500 HDD"<<endl;
	cout<<"                         Notebook, 14 Inch"<<endl;

	harga=3149000;
	break;

	case 700:
	cout<<endl;
	cout<<"Nomor Seri Laptop      : 700 "<<endl;
	cout<<"Merk Laptop            : Laptop Apple MacBook Pro MC700ZA"<<endl;
	cout<<"Spesifikasi            : Core i5, 2.30GHz"<<endl;
	cout<<"                         RAM 4 GB"<<endl;
	cout<<"                         320 HDD"<<endl;
	cout<<"                         Notebook, 13.3 Inch"<<endl;

	harga=7000000;
	break;


	default:
	cout<<endl;
	cout<<"No. Seri yang dimasukkan tidak tersedia"<<endl;
	break;
	}

   if (qty == 3)             // mencari bonus yang didapat
	{
		cout<<"Diskon                 : 10%"<<endl;
	}
	else if (qty == 4)
	{
		cout<<"Diskon                 : 15%"<<endl;
	}
	else if (qty == 5)
	{
		cout<<"Diskon                 : 20%"<<endl;
	}
	else if (qty == 6)
	{
		cout<<"Diskon                 : 25%"<<endl;
	}
	else if (qty == 7)
	{
		cout<<"Diskon                 : 30%"<<endl;
	}
	else if (qty == 8)
	{
		cout<<"Bonus                  : Flashdisk 8Gb"<<endl;
		cout<<"Diskon                 : 35%"<<endl;
	}
	else if (qty == 9)
	{
		cout<<"Bonus                  : Rolling Pad"<<endl;
		cout<<"Diskon                 : 40%"<<endl;
	}
	else if (qty == 10)
	{
		cout<<"Bonus                  : Sound System mini"<<endl;
		cout<<"Diskon                 : diskon 45%"<<endl;
	}
	else if (qty == 11)
	{
		cout<<"Bonus                  : Modem"<<endl;
		cout<<"Diskon                 : diskon 50%"<<endl;
	}
	else if (qty >= 12)
	{
		cout<<"Bonus                  : Laptop Acer Aspire One Happy N57C "<<endl;
	}
	else
	{
		cout<<"Bonus                  : - "<<endl;
	}



	switch (phe)
	{
	case 001:
	cout<<endl;
	cout<<"Pheriperal             : Modem"<<endl;

	harga_phe=300000;
	break;

	case 002:
	cout<<endl;
	cout<<"Pheriperal             : Rolling Pad"<<endl;

	harga_phe=60000;
	break;

	case 003:
	cout<<endl;
	cout<<"Pheriperal             : Sound System Mini"<<endl;

	harga_phe=65000;
	break;

	case 004:
	cout<<endl;
	cout<<"Pheriperal             : Flashdisk 8Gb"<<endl;

	harga_phe=85000;
	break;

	case 0:
	cout<<endl;
	break;


	default:
	cout<<endl;
	cout<<"No. Seri yang dimasukkan tidak tersedia"<<endl;
	break;
	}

	total = harga * qty;     // untuk mencari total harga

	if (qty == 3)   // untuk mencari jumlah diskon
	{
		diskon = 0.1 * total;
	}
	else if (qty == 4)
	{
		diskon = 0.15 * total;
	}
	else if (qty == 5)
	{
		diskon = 0.2 * total;
	}
	else if (qty == 6)
	{
		diskon = 0.25 * total;
	}
	else if (qty == 7)
	{
		diskon = 0.3 * total;
	}
	else if (qty == 8)
	{
		diskon = 0.35 * total;
	}
	else if (qty == 9)
	{
		diskon = 0.4 * total;
	}
	else if (qty == 10)
	{
		diskon = 0.45 * total;
	}
	else if (qty == 11)
	{
		diskon = 0.5 * total;
	}
	else
	{
		diskon = 0;
	}


	total_phe = harga_phe * qty_phe;

	if (qty_phe >=3)
	{
		cout<<"Diskon Pheripheral     : +5%"<<endl;
		diskon_phe = 0.05 * total_phe;
	}
	else
	{
		diskon_phe = 0;
	}



	total_bayar = (total + total_phe) - (diskon + diskon_phe);  // untuk mencari total harga yang harus dibayar

	cout<<"Jumlah beli laptop     : "<<qty<<endl;
	cout<<"Jumlah beli pheriperal : "<<qty_phe<<endl;
	cout<<"Total Harga            = Rp."<<total+total_phe<<endl;
	cout<<"Total Diskon           = Rp."<<diskon+diskon_phe<<endl;
	cout<<"----------------------------------------";
	cout<<endl;
	cout<<"Total Bayar            = Rp."<<total_bayar<<endl;
	cout<<"Jumlah Bayar           = Rp.";
	cin>>bayar;

   kembalian = bayar - total_bayar;    // untuk mencari hasil kembalian

	cout<<"Kembali                = Rp."<<kembalian<<endl;
	cout<<"============================================================"<<endl;
	cout<<"                  Terima Kasih Telah Berkunjung             "<<endl;
	cout<<"                         Ke Depo Laptop                     "<<endl;
	cout<<"                     Jalan Raya Teuku Umar                  "<<endl;
	cout<<"------------------------------------------------------------"<<endl;

	cout<<endl;
	cout<<"Apakah ingin input lagi [Y/T] ?";
	cin>>kembali;

   if(kembali == 'Y' || kembali == 'y')
 {
  goto awal;
 }
 else
 {
  cout<<" Terima Kasih Telah Berkunjung";
 }


getch();
}