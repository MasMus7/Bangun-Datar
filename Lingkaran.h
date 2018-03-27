#pragma once
#include<iostream>
#include"BangunDatar.h"
using namespace std;

class Lingkaran : public BangunDatar {
public:
	int jari;

	Lingkaran(int j) {
		jari = j;
	}

	double hitungLuas();
	double hitungKeliling();
};