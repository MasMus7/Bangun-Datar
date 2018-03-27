#include<iostream>
#include"Persegi.h"
#include"Segitiga.h"
#include"Lingkaran.h"
using namespace std;

int main() {
	cout << "Persegi\n";
	Persegi persegi(4, 4);
	persegi.hitungKeliling();
	persegi.hitungLuas();

	cout << "\nSegitiga\n";
	Segitiga segitiga(3, 4, 5);
	segitiga.hitungKeliling();
	segitiga.hitungLuas();

	cout << "\nLingkaran\n";
	Lingkaran lingkaran(7);
	lingkaran.hitungKeliling();
	lingkaran.hitungLuas();
	return 0;
}