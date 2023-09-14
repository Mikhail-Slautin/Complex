#include"complex.h"

complex::complex(double _Re, double _Im)
{
	Re = _Re;
	Im = _Im;
}

complex :: complex(double _Re):complex(_Re,0.)
{}

complex::complex():complex(0.,0.)
{};

complex::complex(const complex& z)
{
	Re = z.Re;
	Im = z.Im;
}

void complex::setRe(double _re)
{
	Re = _re;
}
double complex:: getRe()
{
	return Re;
}
void complex:: setIm(double _im)
{
	Im = _im;
}
double complex:: getIm()
{
	return Im;
}

complex complex ::operator +(complex& op)
{
	complex res;
	res.Re = Re + op.Re;
	res.Im = Im + op.Im;
	return res;
}

complex complex :: operator =(const complex& op)
{

	Re = op.Re;
	Im = op.Im;
	return (*this);
}
complex operator-(complex z1, complex z2)
{
	complex res;
	res.Re = z1.Re - z2.Re;
	res.Im = z1.Im - z2.Im;
	return res;
}
complex complex::operator*(complex& op)

{
	complex res;

	res.Re = Re * op.Re;
	res.Im = Im * op.Im;

	return res;
}
complex complex::operator/(complex& op)
{
	complex res;

	double r = op.Re * op.Re + op.Im * op.Im;
	res.Re = (Re * op.Re + Im * op.Im) / r;
	res.Im = (Im * op.Re - Re * op.Im) / r;

	return res;
}

double complex::Modul()
{
	return sqrt(Re * Re + Im * Im);
}
double complex::Argument()
{
	if (Re >= 0)
	{
		return atan(Im/Re);
	}
	else
	{
		return atan(Im / Re) + 3.1415926535;
	}
}
complex::~complex()
{}
