#include "complex.h"
#include "stdafx.h"
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	char op = 0;
	
	complex c1;
	complex c2;
	complex c3;


	printMenu();
	whichOp(op);
	switch (op)
	{
	case '+':
		c1 = complexCreate(&c1);
		c2 = complexCreate(&c2);
		c3 = complexAdd(&c1, &c2, &c3);
		break;
	case '-':
		//complexSub();
		break;
	case '*':
		//complexMult();
		break;
	case '/':
		//complexDiv();
		break;
	default:
		printError();
	printResult(&c3);
	}






}
