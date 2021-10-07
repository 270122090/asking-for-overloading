#pragma once

#include <iostream>
using namespace std;

class complex
{
private:
	int real;
	int imagine;

public:

	complex(int r=0, int i=0);
	complex operator+(complex const& obj);
	void addprint();
	complex operator-(complex const& obj);
	void lessprint();
	complex operator * (complex const& obj);
	void multprint();
	complex operator / (complex const& obj);
	void divprint();

	void setdata(int r, int i);
};

