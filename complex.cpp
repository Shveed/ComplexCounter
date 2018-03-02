#include "complex.h"
#include <iostream>

void printMenu()
{
	cout << "-------------------------------" << endl;
	cout << "" << endl;
	cout << " - " << endl;
	cout << " -  " << endl;
	cout << " - " << endl;
	cout << " - " << endl;
	cout << " - " << endl;
	cout << "-------------------------------" << endl;
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

complex complexAdd(complex c1, complex c2)
{

}

complex complexCreateFromPolar(double absVal, double arg);
int complexToString(complex c, char buffer[], int size);

void printResult()
{

}

void printError()
{
	cout << "Error. Enter correct operation!" << endl;
}
