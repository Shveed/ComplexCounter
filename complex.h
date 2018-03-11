#ifndef COMPLEX_H
#define COMPLEX_H
#include <cmath>
#include <string.h>
#include "stdafx.h"
#include <iostream>
using namespace std;

typedef struct complex *Complex;

typedef struct complex {
	double real = 0;
	double imag = 0;
}complex;

void printMenu();
void printResult(double real, double imag);

char whichOp(char op);

Complex complexCreate(Complex c1);

complex complexAdd(complex *c1, complex *c2);

complex complexSub(complex *c1, complex *c2);

complex complexMult(complex *c1, complex *c2);

complex complexDiv(complex *c1, complex *c2);

double complexModule(complex *c1);

void printError();

//complex complexCreateFromPolar(double absVal, double arg);
//int complexToString(complex c, char buffer[], int size);


#endif COMPLEX_H
