/*
	Source: Kelas Terbuka
	Modified by Rizky Khapidsyah
*/

#include <iostream>

using namespace std;

int a = 6; //Variabel: Assignment
int b = 4; //Variabel: Assignment
int hasil; //Variabel: Deklarasi

void TampilkanNilai();

int main()
{
	//Operator Aritmatika: *, /, +, -, %
	cout << "-----------\n" << "PERKALIAN\n" << "-----------" << endl;
	hasil = a * b;
	TampilkanNilai();
	cout << a << " x " << b << " = " << hasil << "\n" << endl;

	cout << "-----------\n" << "PEMBAGIAN\n" << "-----------" << endl;
	hasil = a / b;
	TampilkanNilai();
	cout << a << " / " << b << " = " << hasil << "\n" << endl;

	cout << "-----------\n" << "PENAMBAHAN\n" << "-----------" << endl;
	hasil = a + b;
	TampilkanNilai();
	cout << a << " + " << b << " = " << hasil << "\n" << endl;

	cout << "-----------\n" << "PENGURANGAN\n" << "-----------" << endl;
	hasil = a - b;
	TampilkanNilai();
	cout << a << " - " << b << " = " << hasil << "\n" << endl;

	cout << "-----------\n" << "MODULUS\n" << "-----------" << endl;
	hasil = a % b;
	TampilkanNilai();
	cout << a << " Modulus(%) " << b << " = " << hasil << "\n\n" << endl;

	//Urutan Operasi Dalam C++
	cout << "------------------\n" << "URUTAN OPERASI\n" << "------------------" << endl;
	hasil = a + b * a; //Yang pertama kali di proses adalah b * a baru ditambahkan dengan a
	TampilkanNilai();
	cout << "Contoh 1:" << endl;
	cout << "a + b x a =" << endl;
	cout << a << " + " << b << " x " << a << " = " << hasil << "\n" << endl;

	hasil = (a + b) * a; //Yang pertama kali di proses adalah (a + b) baru dikalikan dengan a
	cout << "Contoh 2:" << endl;
	cout << "(a + b) x a =" << endl;
	cout << "(" << a << " + " << b << ")" << " x " << a << " = " << hasil << "\n" << endl;

	cin.get();
	return 0;
}

void TampilkanNilai()
{
	cout << "Nilai a: " << a << endl;
	cout << "Nilai b: " << b << "\n" << endl;
}