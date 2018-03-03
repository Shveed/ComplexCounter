#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

typedef struct complex *Complex;

typedef struct complex{
	int real = 0;
	int imag = 0;
};

void printMenu();
void printResult(complex *c3);

char whichOp(char op);

complex complexCreate(complex *c1);

complex complexAdd(complex *c1, complex *c2, complex *c3);
//complex complexSub(double c1, double c2);
//complex complexMult(double c1, double c2);
//complex complexDiv(double c1, double c2);
void printError();

//complex complexCreateFromPolar(double absVal, double arg);
//int complexToString(complex c, char buffer[], int size);


#endif COMPLEX_H
