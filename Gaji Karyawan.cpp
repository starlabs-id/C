#include <iostream.h>
#include <conio.h>
#include <stdio.h>

main()
{
	int gaji_per_jam;
   int golongan;
	int total_jam_kerja;
	int total_jam_lembur;
	char nama_karyawan [20];
   float gaji_tetap;
   float total_gaji_lembur;
	float total_gaji;

	cout	<<	"___________[ GAJI KARYAWAN ]___________"	<<endl<<endl;
	cout	<<	"1. Gaji tetap 500.000 Gaji per jam 5000"	<<endl;
	cout	<<	"2. Gaji tetap 300.000 Gaji per jam 3000"	<<endl;
	cout	<<	"3. Gaji tetap 250.000 Gaji per jam 2000"	<<endl;
	cout	<<	"4. Gaji tetap 100.000 Gaji per jam 1500"	<<endl;
	cout	<<	"5. gaji tetap 50.000  Gaji per jam 1000"	<<endl;
	cout	<<	"_______________________________________"	<<endl<<endl<<endl;

	cout	<<	"MASUKKAN NAMA KARYAWAN		: ";
	cin	>>	nama_karyawan;
   cout	<< "MASUKKAN GOLONGAN [1...5]	: ";
	cin	>>	golongan;

	switch (golongan)
	{
		case 1:
		gaji_tetap   = 500000;
		gaji_per_jam = 5000;
		break;
		case 2:
		gaji_tetap   = 300000;
		gaji_per_jam = 3000;
		break;
		case 3:
		gaji_tetap   = 250000;
		gaji_per_jam = 2000;
		break;
		case 4:
		gaji_tetap   = 100000;
		gaji_per_jam = 1500;
		break;
		case 5:
		gaji_tetap   = 50000;
		gaji_per_jam = 1000;
		break;

		default:
		cout	<<	"GAJI TIDAK ADA"	<<endl;
		break;
	}

	cout	<<	"MASUKKAN TOTAL JAM KERJA	: ";
	cin	>>	total_jam_kerja;
	cout	<<	endl <<endl;

	if	(total_jam_kerja > 150)
	{
	 total_jam_lembur = total_jam_kerja - 150;
	}
	else
	{
	 total_jam_lembur = 0;
	}

	total_gaji_lembur = total_jam_lembur*(gaji_per_jam*1.5);
	total_gaji=gaji_tetap + total_gaji_lembur;

	cout	<<	"_________[ TOTAL GAJI KARYAWAN ]_________"	<<endl					<<endl;
	cout	<<	"Nama Karyawan               = "					<<nama_karyawan		<<endl;
	cout	<<	"Besar Gaji Tetap            = Rp."				<<gaji_tetap			<<endl;
	cout	<<	"Gaji per Jam                = Rp."				<<gaji_per_jam			<<endl;
	cout	<<	"Total Jam Kerja             = "					<<total_jam_kerja		<<" Jam"	<<endl;
	cout	<<	"Total Jam Lembur            = "					<<total_jam_lembur	<<" Jam"	<<endl;
	cout	<<	"Total Gaji Lembur           = Rp."				<<total_gaji_lembur	<<endl;
	cout	<<	"Total Gaji yang Diterima    = Rp."				<<total_gaji			<<endl;
	cout	<<	"_________________________________________"	<<endl;
	cout	<<	endl;

	getch();
}
