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
	cout << "------------------------------------" << endl;
};

complex complexCreate(Complex c1, Complex c2)
{
	cout << "Enter real and imaginal coordinates." << endl;
	cout << "Complex 1: ";
	cin >> c1->real >> c1->imag;
	cout << "Complex 2: ";
	cin >> c2->real >> c2->imag;
	return *c1, *c2;
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
