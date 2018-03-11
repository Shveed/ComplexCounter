#include "stdafx.h"
#include "Complex.h"
#include <iostream>
using namespace std;

void printMenu()
{
	cout << "------------------------------------" << endl;
	cout << "Welcome to program 'ComplexCounter' " << endl;
	cout << "  First of all - choose operation " << endl;
	cout << "+ - addiction(+) " << endl;
	cout << "- - substraction(-)" << endl;
	cout << "* - multiplication(*)" << endl;
	cout << "/ - division(/)" << endl;
	cout << "M - module(m)" << endl;
	cout << "------------------------------------" << endl;
};

Complex complexCreate(Complex c1)
{
	cin >> c1->real >> c1->imag;
	return c1;
};

char whichOp(char op)
{
	cout << "Enter operation: ";
	cin >> op;
	return op;
};

complex complexAdd(complex *c1, complex *c2)
{
	complex c;
	c.real = c1->real + c2->real;
	c.imag = c1->imag + c2->imag;
	return c;
};

complex complexSub(complex *c1, complex *c2)
{
	complex c;
	c.real = c1->real - c2->real;
	c.imag = c1->imag - c2->imag;
	return c;
}

complex complexMult(complex *c1, complex *c2)
{
	complex c;
	c.real = c1->real * c2->real - c1->imag * c2->imag;
	c.imag = c1->real * c2->imag - c2->real * c1->imag;
	return c;
}

complex complexDiv(complex *c1, complex *c2)
{
	complex c;
	c.real = (c1->real * c2->real + c1->imag * c2->imag) / (pow(c2->real, 2) + pow(c2->imag, 2));
	c.imag = (c1->imag * c2->real - c1->real * c2->imag) / (pow(c2->real, 2) + pow(c2->imag, 2));
	return c;
}

double complexModule(complex *c1)
{
	cout << "Enter complex: ";
	cin >> c1->real >> c1->imag;
	double m;
	m = sqrt(pow(c1->real, 2) + pow(c1->imag, 2));
	cout << "Module of your complex equals to: " << m << endl;
	return m;
}

//complex complexCreateFromPolar(double absVal, double arg);
//int complexToString(complex c, char buffer[], int size);

void printResult(double real, double imag)
{
	cout << "Real part equals to : " << real << endl;
	cout << "Imaginal part equals to : " << imag << endl;
	cout << "Your complex is: (" << real << ";" << imag << "i)";
};

void printError()
{
	cout << "Error. Enter correct operation!" << endl;
};
