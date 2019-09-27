#include <iostream>;
#include <conio.h>;
#include <string>;
using namespace std;

int main()
{
	long int angka;
	int seratusribu = 0, limapuluhribu = 0, duapuluhribu = 0, sepuluhribu = 0;
	int limaribu = 0, duaribu = 0, seribu = 0, limaratus = 0, duaratus = 0, seratus = 0, limapuluh = 0;
	string ulang, xx;
	ulang;
	cout << "Masukan Uang :";
	cin >> angka;
	while (angka >= 100000){
		angka -= 100000;
		seratusribu + 1;
		seratusribu++;
	}while (angka >= 50000) {
		angka -= 50000;
		limapuluhribu + 1;
		limapuluhribu++;
	}while (angka >= 20000){
		angka -= 20000;
		duapuluhribu + 1;
		duapuluhribu++;
	}while (angka >= 10000){
		angka -= 10000;
		sepuluhribu + 1;
		sepuluhribu++;
	}while (angka >= 5000){
		angka -= 5000;
		limaribu + 1;
		limaribu++;
	}while (angka >= 2000){
		angka -= 2000;
		duaribu + 1;
		duaribu++;
	}while (angka >= 1000){
		angka -= 1000;
		seribu + 1;
		seribu++;
	}while (angka >= 500){
		angka -= 500;
		limaratus + 1;
		limaratus++;
	}while (angka >= 200){
		angka -= 200;
		duaratus + 1;
		duaratus++;
	}while (angka >= 100){
		angka -= 100;
		seratus + 1;
		seratus++;
	}while (angka >= 50){
		angka -= 50;
		limapuluh + 1;
		limapuluh++;
	}
	cout << endl;
	cout << "Dapat Dipecah kan Menjadi" << endl;
	if (seratusribu != 0){
		cout << "Rp100.000 : " << seratusribu << " lembar" << endl;
	}if (limapuluhribu != 0) {
		cout << "Rp50.000  : " << limapuluhribu << " lembar" << endl;
	}if (duapuluhribu != 0){
		cout << "Rp20.000  : " << duapuluhribu << " lembar" << endl;
	}if (sepuluhribu != 0){
		cout << "Rp10.000  : " << sepuluhribu << " lembar" << endl;
	}if (limaribu != 0){
		cout << "Rp5.000   : " << limaribu << " lembar" << endl;
	}if (duaribu != 0){
		cout << "Rp2.000   : " << duaribu << " Lembar" << endl;
	}if (seribu != 0){
		cout << "Rp1.000   : " << seribu << " Lembar" << endl;
	}if (limaratus != 0){
		cout << "Rp500     : " << limaratus << " Keping" << endl;
	}if (duaratus != 0){
		cout << "RP200     : " << duaratus << " Keping" << endl;
	}if (seratus != 0){
		cout << "Rp100     : " << seratus << " Keping" << endl;
	}if (limapuluh != 0){
		cout << "RP50      : " << limapuluh << " Keping" << endl;
	}if (angka != 0){
		cout << "Sisa Uang : " << angka << " PERAK" << endl;
	}cout << "Anggap Aja ada uang nya";
	



	_getch();
	return 0;
}