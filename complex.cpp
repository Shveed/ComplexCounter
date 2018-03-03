#include "complex.h"
#include "stdafx.h"
#include <iostream>
using namespace std;

void printMenu()
{
	cout << "------------------------------------" << endl;
	cout << "Welcome to program 'ComplexCounter' " << endl;
	cout << "  First of all - choose operation " << endl;
	cout << "+ - addiction " << endl;
	cout << "- - substraction" << endl;
	cout << "/ - division" << endl;
	cout << "* - multiplication" << endl;
	cout << "------------------------------------" << endl;
}

complex complexCreate(complex *c1)
{
	cout << "Enter real and imaginal coordinates." << endl;
	cin >> c1->real;
	cin >> c1->imag;
	return *c1;
}

char whichOp(char op)
{
	cout << "Enter operation: ";
	cin >> op;
	return op;
}

complex complexAdd(complex *c1, complex *c2, complex *c3)
{
	c3->real = c1->real + c2->real;
	c3->imag = c1->imag + c2->imag;
	return *c3;
}

//complex complexCreateFromPolar(double absVal, double arg);
//int complexToString(complex c, char buffer[], int size);

void printResult(complex *c3)
{
	cout << "Result of operation is: " << &c3 << endl;
}

void printError()
{
	cout << "Error. Enter correct operation!" << endl;
}
