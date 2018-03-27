#pragma once
#include<iostream>
#include"BangunDatar.h"
using namespace std;

class Segitiga : public BangunDatar {
public:
	int alas, tinggi, sisi;

	Segitiga(int a, int t, int s) {
		alas = a;
		tinggi = t;
		sisi = s;
	}

	double hitungLuas();
	double hitungKeliling();
};