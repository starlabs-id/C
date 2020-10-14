#include <iostream.h>
#include <conio.h>

main()
{
	int upah_per_jam,upah_lembur,upah_per_jam_kerja,upah_per_jam_lembur;
	int jumlah_jam,total_akhir;
	int jumlah_jam_lembur, jumlah_jam_kerja;
	char golongan,yt,nama[20];

	kembali:
	clrscr();
	cout<<"                                                   "<<endl;
	cout<<"            TABEL GAJI KARYAWAN PT.XYZ             "<<endl;
	cout<<"                                                   "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"|  Golongan | Upah Per Jam | Upah Lembur Per Jam  |"<<endl;
	cout<<"==================================================="<<endl;
	cout<<"|     A     |    Rp 4000   |       Rp 2000        |"<<endl;
	cout<<"|     B     |    Rp 5000   |       Rp 2500        |"<<endl;
	cout<<"|     C     |    Rp 6000   |       Rp 3000        |"<<endl;
	cout<<"|     D     |    Rp 7000   |       Rp 3500        |"<<endl;
	cout<<"---------------------------------------------------"<<endl;

	upah_per_jam=0;
	upah_lembur=0;
	jumlah_jam_lembur=0;
	jumlah_jam_kerja=0;

	cout<<"Masukkan Nama Karyawan      = ";
	cin>>nama;
	cout<<"Masukkan Golongan Pekerjaan = ";
	cin>>golongan;
	cout<<"Masukkan Jumlah Jam Kerja   = ";
	cin>>jumlah_jam;

	if((jumlah_jam<=48)&&(golongan=='A' || golongan=='a'))
	{
		jumlah_jam_kerja=jumlah_jam;
		upah_per_jam_kerja=4000;
		upah_per_jam_lembur=0;
		upah_per_jam=4000*jumlah_jam;
		upah_lembur=0;
	}
   else if((jumlah_jam>48)&&(golongan=='A' || golongan=='a'))
	{
		upah_per_jam_kerja=4000;
		upah_per_jam_lembur=2000;
		jumlah_jam_lembur= jumlah_jam - 48;
		jumlah_jam_kerja= jumlah_jam - jumlah_jam_lembur;
		upah_per_jam = 4000*jumlah_jam_kerja;
		upah_lembur = 2000*jumlah_jam_lembur;
	}
	else if((jumlah_jam<=48)&&(golongan=='B' || golongan=='b'))
	{
		jumlah_jam_kerja=jumlah_jam;
		upah_per_jam_kerja=5000;
		upah_per_jam_lembur=0;
		upah_per_jam=5000*jumlah_jam;
		upah_lembur=0;
	}
	else if((jumlah_jam > 48)&&(golongan=='B' || golongan=='b'))
	{
		upah_per_jam_kerja=5000;
		upah_per_jam_lembur=2500;
		jumlah_jam_lembur= jumlah_jam - 48;
		jumlah_jam_kerja= jumlah_jam - jumlah_jam_lembur;
		upah_per_jam = 5000*jumlah_jam_kerja;
		upah_lembur = 2500*jumlah_jam_lembur;
	}
	else if((jumlah_jam<=48)&&(golongan=='C' || golongan=='c'))
	{
		jumlah_jam_kerja=jumlah_jam;
		upah_per_jam_kerja=6000;
		upah_per_jam_lembur=0;
		upah_per_jam=6000*jumlah_jam;
		upah_lembur=0;
	}
   else if((jumlah_jam > 48)&&(golongan=='C' || golongan=='c'))
	{
		upah_per_jam_kerja=6000;
		upah_per_jam_lembur=3000;
		jumlah_jam_lembur= jumlah_jam - 48;
		jumlah_jam_kerja= jumlah_jam - jumlah_jam_lembur;
		upah_per_jam = 6000*jumlah_jam_kerja;
		upah_lembur = 3000*jumlah_jam_lembur;
	}
	else if((jumlah_jam<=48)&&(golongan=='D' || golongan=='d'))
	{
		jumlah_jam_kerja=jumlah_jam;
		upah_per_jam_kerja=7000;
		upah_per_jam_lembur=0;
		upah_per_jam=7000*jumlah_jam;
		upah_lembur=0;
	}
	else if((jumlah_jam > 48)&&(golongan=='D' || golongan=='d'))
	{
		upah_per_jam_kerja=7000;
		upah_per_jam_lembur=3500;
		jumlah_jam_lembur= jumlah_jam - 48;
		jumlah_jam_kerja= jumlah_jam - jumlah_jam_lembur;
		upah_per_jam = 7000*jumlah_jam_kerja;
		upah_lembur = 3500*jumlah_jam_lembur;
	}
	else
	{
		cout<<"Perintah Yang Anda Masukkan Salah"<<endl;
	}
	total_akhir=upah_per_jam + upah_lembur;

	cout<<"----------------------------------------------------"<<endl;
	cout<<"Nama Karyawan            = "<<nama<<endl;
	cout<<"Golongan Yang Dipilih    = "<<golongan<<endl;
	cout<<"Jumlah Jam Kerja         = "<<jumlah_jam_kerja<<endl;
	cout<<"Jumlah Jam Lembur        = "<<jumlah_jam_lembur<<endl;
	cout<<"Jumlah Jam Keseluruhan   = "<<jumlah_jam<<endl;
	cout<<"Upah Kerja Per Jam       = "<<upah_per_jam_kerja<<endl;
	cout<<"Upah Lembur Per Jam      = "<<upah_per_jam_lembur<<endl;
	cout<<"Total Upah Kerja         = "<<upah_per_jam<<endl;
	cout<<"Total Upah Lembur        = "<<upah_lembur<<endl;
	cout<<"Total                    = "<<total_akhir<<endl;
	cout<<"----------------------------------------------------"<<endl;

	cout<<"Kembali (Y/N) : ";
	cin>>yt;
	clrscr();
	if(yt=='Y' || yt=='y')
	{
	goto kembali;
	}
	if(yt=='T' || yt=='t')
	{
	goto selesai;
	}
	selesai:
	cout<<"\n\n";
	cout<<"----------------------------------------"<<endl;
	cout<<"              Terima Kasih              "<<endl;
	cout<<"----------------------------------------"<<endl;

	getch();
}

