#include "complex.h"

complex::complex(int r, int i)
{
	real = r;
	imagine = i;

}

complex complex::operator+(complex const& obj)
{
	complex plus;
	plus.real = real + obj.real;
	plus.imagine = imagine + obj.imagine;
	return plus;
}

complex complex::operator-(complex const& obj)
{
	complex less;
	less.real = real - obj.real;
	less.imagine = imagine - obj.imagine;
	return less;
}

void complex::lessprint()
{
	cout << real << " - i" << imagine << endl;

}

complex complex::operator*(complex const& obj)
{
	complex mult;

	mult.real = (real* obj.real) - (imagine* obj.imagine);
	mult.imagine = (( real*obj.imagine) + (imagine*obj.real));
	return mult;
}

void complex::multprint()
{
	cout << real << " + " << imagine << "i" << endl;
}

complex complex::operator/(complex const& obj)
{
	complex devide;

	devide.real = (((real * obj.real) + (imagine * obj.imagine)) / ((real * real) + (obj.imagine* obj.imagine)));
	devide.imagine = (((imagine * obj.real) - (real * obj.imagine)) / ((obj.real * obj.real) + (obj.imagine * obj.imagine)));
	return devide;
}

void complex::divprint()
{
	cout << real << " + " << imagine << " i " << endl;
}

void complex::addprint()
{
	cout << real << " + i" << imagine << endl;
}

