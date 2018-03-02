#include "Complex.h"
#include "stdafx.h"

int main()
{
	char op = 0;
	Complex c1;
	complex c2;
	complex c3;


	printMenu();
	whichOp(op);
	switch(op)
	{
	case '+':
		complexAdd();
		break;
	case '-':
		complexSub();
		break;
	case '*':
		complexMult();
		break;
	case '/':
		complexDiv();
		break;
	default:
		printError();
	}






}
