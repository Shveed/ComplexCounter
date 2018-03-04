#include "stdafx.h"
#include "Complex.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char oper = ' ';

	complex c1, c2, c3;

	printMenu();
	oper = whichOp(oper);
	switch (oper)
	{
	case '+':
		complexCreate(&c1, &c2);
		c3 = complexAdd(&c1, &c2);
		printResult(c3.real, c3.imag);
		break;
	case '-':
		complexCreate(&c1, &c2);
		complexSub(&c1, &c2);
		printResult(c3.real, c3.imag);
		break;
	case '*':
		complexCreate(&c1, &c2);
		complexMult(&c1, &c2);
		printResult(c3.real, c3.imag);
		break;
	case '/':
		complexCreate(&c1, &c2);
		complexDiv(&c1, &c2);
		printResult(c3.real, c3.imag);
		break;
	default:
			printError();
			break;
	}
	return 0;
}
