#include <iostream>
using namespace std;
class bidangDatar {
private:
	int x; //variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
	bidangDatar() { //constructor
		x = 0;
	}
	virtual void input() {} // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
		virtual float Luas(int a) { return 0; } //fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; } //fungsi untuk menghitung keliling
	void setX(int a) { //fungsi untuk memberi/mengirim nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};

class Lingkaran :public bidangDatar {
private:
	int jari_jari;
public:
	void input() {
		cout << "Masukan jari-jari lingkaran: ";
		cin >> jari_jari;
		setX(jari_jari);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float keliling(int r) {
		return 2 * 3.14 * r;
	}
};

class Bujursangkar :public bidangDatar {
private:
	int sisi;
public:
	void input() {
		cout << "Masukkan sisi bujursangkar: ";
		cin >> sisi;
		setX(sisi);
	}
	float Luas(int sisi) {
		return sisi * sisi;
		}
	float Keliling(int sisi) {
		return 4 * sisi;
	}
};

int main() {
	bidangDatar *bd;
	Lingkaran lingkaran;
	Bujursangkar bujursangkar;
	
	*bd = &lingkaran;
	*bd ->input();
	cout << "Luas lingkaran: " << bd->Luas(bd->getX()) << endl;
	cout << "Keliling lingkaran: " << bd->Keliling(bd->getX()) << endl;

	bd = &bujursangkar;
	bd->input();
	cout << "Luas bujursangkar: " << bd->Luas(bd->getX()) << endl;
	cout << "Keliling bujursangkar: " << bd->Keliling(bd->getX()) << endl;

	return 0;
}
	
		
