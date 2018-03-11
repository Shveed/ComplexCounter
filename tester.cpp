#include "stdafx.h"
#include "Complex.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char oper = ' ';

	complex c3;
	Complex c1 = new complex;
	Complex c2 = new complex;

	printMenu();
	oper = whichOp(oper);
	switch (oper)
	{
	case '+':
		cout << "Enter first complex" << endl;
		complexCreate(c1);
		cout << "Enter second complex" << endl;
		complexCreate(c2);
		c3 = complexAdd(c1, c2);
		printResult(c3.real, c3.imag);
		break;
	case '-':
		cout << "Enter first complex" << endl;
		complexCreate(c1);
		cout << "Enter second complex" << endl;
		complexCreate(c2);
		complexSub(c1, c2);
		printResult(c3.real, c3.imag);
		break;
	case '*':
		cout << "Enter first complex" << endl;
		complexCreate(c1);
		cout << "Enter second complex" << endl;
		complexCreate(c2);
		complexMult(c1, c2);
		printResult(c3.real, c3.imag);
		break;
	case '/':
		cout << "Enter first complex" << endl;
		complexCreate(c1);
		cout << "Enter second complex" << endl;
		complexCreate(c2);
		complexDiv(c1, c2);
		printResult(c3.real, c3.imag);
		break;
	case 'M':
	case 'm':
		complexModule(c1);
		break;
	default:
		printError();
		break;
	}
	return 0;
	delete c1;
	delete c2;
}
