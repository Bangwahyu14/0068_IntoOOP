#include <iostream>
using namespace std;

class bangundatar {

	//akses modifier
private:
	float panjang, lebar;
publick:
	float luas;

	void input() { // methode input persegi panjang

		cout << "Masukan panjangnya = ";
		cin >> panjang;
		cout << "Masukan lebarnya = ";
		cin >> lebar;

	}
	float hitungluas() {
		cout << "panjangnya = " << panjang << endl;
		cout << "lebarnya = " << lebar << endl;
		cout << "luasnya = " << hitungluas()  << endl;
 	}

};

int main() {
	bangundatar pp; //deklarasi objek pp dari class bangun datar
	pp.input();
	pp.display();

	return 0;
}