#pragma once
#include<iostream>
#include"BangunDatar.h"
using namespace std;

class Persegi : public BangunDatar {
public:
	int sisi1, sisi2;

	Persegi(int s1, int s2) {
		sisi1 = s1;
		sisi2 = s2;
	}

	double hitungLuas();
	double hitungKeliling();
};