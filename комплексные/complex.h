#pragma once
#include <cmath>
#include<iostream>
using namespace std;
class complex
{
private:
	double Re, Im;
public:
	complex(double _Re, double _Im);
	complex(double _Re);
	complex();
	complex(const complex &z);

	complex operator +(complex & op);
	complex operator =(const complex& op);
	complex operator *(complex& op);
	complex operator /(complex& op);
	friend complex operator-(complex z1, complex z2);
	
	void setRe(double _re);
	double getRe();
	double Modul();
	double Argument();

	void setIm(double _im);
	double getIm();

	~complex();



};

