#include <iostream>
using namespace std;

int nIndex, nSensor1, nSensor2, nSensor3, Rerata;
string Kota, status;

void input()
{
	cout << "Masukkan nama kota";
	cin >> Kota;
	cout << "Masukkan nilai Indeks Kualitas Udara";
	cin >> nIndex;
	cout << "Masukkan nilai Sensor1";
	cin >> nSensor1;
	cout << "Masukkan nilai Sensor2";
	cin >> nSensor2;
	cout << "Masukkan nilai Sensor3";
	cin >> nSensor3;
}

int hitungkualitasudara()
{
	Rerata = (nIndex + nSensor1 + nSensor2 + nSensor3) / 3;

	if (nIndex > 75) {
		status = "Tidak Sehat";
	}
	else if (nSensor1 >= 45) {
		status = "Tidak Sehat";
	}
	else if (nSensor2 >= 45) {
		status = "Tidak Sehat";
	}
	else if (nSensor3 >= 45) {
		status = "Tidak Sehat";
	}
	else if (Rerata >= nIndex, nSensor1, nSensor2, nSensor3) {
		status = "Tidak Sehat";
	}
	else
	{
		status = "Sehat karena nilainya kurang dari batas Index dan batas sensor";
	}

	cout << "Kondisi kota =" << Kota << status << endl;
}

int main()
{
	input();
	hitungkualitasudara();
	system("pause");

	return 0;
}


// 1. a. int umur; 
// 1. b. string alamat;
// 1. c. float harga;

// 2. a. contoh prosedur :
// void input ()
// {
// cout << "Masukkan Nama = ";
// cin >> nama;
// cout << "Masukkan Jumlah Mie = " ;
// cin >> nMie;
// cout << "Masukkan Jumlah Minyak = " ;
// cin >> nMinyak;
// cout << "Masukkan Jumlah Telor = " ;
// cin >> nTelor;
// }

// 2. b. contoh fungsi :
//int hitungHarga()
//{
// return (nMie * hMie) + (nMinyak * hMinyak) + (nTelor * hTelor);
// }

// 3. do
// {
// cout << "Perulangan DO..WHILE" << endl;
// bilangan = rand() % 10;
// cout << "Bilangannya = " << bilangan << endl;
// } while (bilangan > 5);

// 4. 
//if (nBilA == nBilB) {
//	status = "Bilangannya sama";
// }
// else if (nBilA > nBilB) {
//	status = "Bilangan A lebih besar dari bilangan B";
// }
// else {
//	status = "Bilangan A lebih kecil dari bilangan B";
// }

// 5.
// struct DetailAlamat {
//	string desa;
//	string kota;
// };