#include <iostream>
using namespace std;

class mahasiswa {
publick: //akses modifier
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "nama: " << nama << endl;
		cout << "umur: " << umur << endl;
		cout << "juurusan: " << jurusan << endl;

	}
};

class matakuliah {
private:
	string kodemk;
	string namamk;
	int sks;
publick:
	void input() {
		cout << "kode MK: ";
		cin >> kodemk;
		cout << "nama MK: ";
		cin >> namamk;
		cout << "SKS: ";
		cin >> sks;
	}

	void output() {
		cout << "kode MK: " << kodemk << endl;
		cout << "naama MK: " << namamk << endl;
		cout << "SKS: " << sks << endl;
	}
};

int main() {
	Mahasiswa mhs;
	Mahasiswa mk;

	mhs.nama = "Budi";
	mhs.umur = 20;
	mhs.jurusan = "teknik informatika";
	mhs.output();

	mk.input();
	mk.output();

	return 0;
}