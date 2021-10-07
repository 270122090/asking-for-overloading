// Operating overloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "complex.h"
#include <iostream>

using namespace std;

int main()
{
	int r1, r2, i1, i2;
	complex a1(10, 5), a2(2, 4), a4, a5;
	complex c3 = a1 + a2;
	c3.addprint();
	complex c4 = a1 - a2;
	c4.lessprint();

	complex c5 = a1 * a2;
	c5.multprint();

	complex c6 = a1 / a2;
	c6.divprint();

	cout << "Enter real";
	cin >> r1;
	cout << "Enter real";
	cin >> i1;

	a4.setdata(r1,i1);

	cout << "Enter real";
	cin >> r2;
	cout << "Enter real";
	cin >> i2;
	a4.setdata(r2, i2);

	complex c7 = a4 + a5;
	c7.addprint();
	c7 = a1 - a2;
	c7.lessprint();


}